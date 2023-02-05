#include <bits/stdc++.h>
using namespace std;
typedef long long mint;

class any_node{
    public:
    mint depth_;
    mint max_depth_;

    mint min_a_, max_a_;
    mint min_w_, max_w_;

    any_node(mint depth, mint max_depth): depth_(depth), max_depth_(max_depth){
    }

    virtual ~any_node(){
    }

    virtual any_node *ins(any_node *l) = 0;
    virtual mint max_w(mint a) = 0;
    virtual any_node *drop(mint a, mint w) = 0;
};

class node : public any_node{
    public:
    bool banzai_;

    any_node *left_;
    any_node *right_;

    node(mint depth, mint max_depth, any_node *l, any_node *r): any_node(depth, max_depth), banzai_(true){
        min_a_ = min(l->min_a_, r->min_a_);
        max_a_ = max(l->max_a_, r->max_a_);
        min_w_ = min(l->min_w_, r->min_w_);
        max_w_ = max(l->max_w_, r->max_w_);

        if (l->max_a_ < r->min_a_){
            left_ = l;
            right_ = r;
        } else {
            left_ = r;
            right_ = l;
        }
    }

    virtual ~node(){
        if (banzai_){
            delete left_;
            delete right_;
        }
    }

    virtual any_node *ins(any_node *l){
        ++(l->depth_);

        if (left_->max_a_ > l->min_a_){
            left_ = left_->ins(l);
        } else if (right_->min_a_ < l->max_a_){
            right_ = right_->ins(l);
        } else if (left_->max_depth_ < right_->max_depth_){
            left_ = left_->ins(l);
        } else {
            right_ = right_->ins(l);
        }

        max_depth_ = max(left_->max_depth_, right_->max_depth_);

        min_a_ = min(left_->min_a_, right_->min_a_);
        max_a_ = max(left_->max_a_, right_->max_a_);
        min_w_ = min(left_->min_w_, right_->min_w_);
        max_w_ = max(left_->max_w_, right_->max_w_);

        return this;
    }

    virtual mint max_w(mint a){
        mint left_max_w = (a < left_->min_a_ ? 0 : (a > left_->max_a_ ? left_->max_w_ : left_->max_w(a)));
        mint right_max_w = (a < right_->min_a_ ? 0 : (a > right_->max_a_ ? right_->max_w_ : right_->max_w(a)));

        return max(left_max_w, right_max_w);
    }

    // does not update depth_ or max_depth_ which might screw up later insertions
    virtual any_node *drop(mint a, mint w){
        if ((max_a_ < a) || (min_w_ > w)){
            return this;
        }

        left_ = left_->drop(a, w);
        right_ = right_->drop(a, w);

        banzai_ = false;

        if ((left_ == NULL) && (right_ == NULL)){
            delete this;

            return NULL;
        } else if ((left_ == NULL) && (right_ != NULL)){
            delete this;

            return right_;
        } else if ((left_ != NULL) && (right_ == NULL)){
            delete this;

            return left_;
        } else {
            min_a_ = min(left_->min_a_, right_->min_a_);
            max_a_ = max(left_->max_a_, right_->max_a_);
            min_w_ = min(left_->min_w_, right_->min_w_);
            max_w_ = max(left_->max_w_, right_->max_w_);

            banzai_ = true;

            return this;
        }
    }
};

class leaf : public any_node{
    public:

    leaf(mint depth, mint max_depth): any_node(depth, max_depth){
    }

    virtual ~leaf(){
    }

    virtual any_node *ins(any_node *l){
        if (l->min_a_ == min_a_){
            min_w_ = max_w_ = max(l->min_w_, max_w_);

            delete l;

            return this;
        }

        ++(l->depth_);
        ++(l->max_depth_);

        return new node(depth_++, max_depth_++, this, l);
    }

    virtual mint max_w(mint a){
        return a > max_a_ ? max_w_ : 0;
    }

    virtual any_node *drop(mint a, mint w){
        if ((max_a_ <= a) || (max_w_ > w)){
            return this;
        }

        delete this;

        return NULL;
    }
};

class tree{
    public:

    any_node *root_;

    tree(): root_(NULL){
    }

    ~tree(){
        if (root_ != NULL){
            delete root_;
        }
    }

    void prc(mint a, mint w){
        mint wmax = max_w(a) + w;
        drop(a, wmax);
        ins(a, wmax);
    }

    void ins(mint a, mint w){
        leaf *nl = new leaf(0, 0);

        nl->min_a_ = nl->max_a_ = a;
        nl->min_w_ = nl->max_w_ = w;

        if (root_ == NULL){
            root_ = nl;

            return;
        }

        root_ = root_->ins(nl);
    }

    mint max_w(mint a){
        if (root_ == NULL){
            return 0;
        }

        return root_->max_w(a);
    }

    void drop(mint a, mint w){
        if (root_ == NULL){
            return;
        }

        root_ = root_->drop(a, w);
    }
};

int main(){
    mint c;

    cin >> c;

    for (; c; --c){
        mint n;

        cin >> n;

        mint *a = new mint[n];
        mint *w = new mint[n];

        for (mint i = 0; i != n; ++i){
            cin >> a[i];
        }

        for (mint i = 0; i != n; ++i){
            cin >> w[i];
        }

        tree tr;

        for (mint i = 0; i != n; ++i){
            tr.prc(a[i], w[i]);
        }

        cout << tr.root_->max_w_ << endl;

        delete[] a;
        delete[] w;
    }
    return 0;
}
