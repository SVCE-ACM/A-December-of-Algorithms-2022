def guess_the_word(n, words):
    words = words.split()
    max_length = 0
    max_word = ""
    for word in words:
        if len(word) % 2 == 1 and len(word) > max_length:
            max_length = len(word)
            max_word = word
    if max_word:
        return max_word
    else:
        return "Better luck next time"

n = 5
words = "Hello Good Morning Welcome You"

print(guess_the_word(n, words))
