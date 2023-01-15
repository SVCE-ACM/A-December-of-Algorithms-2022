def main():
    to_piglatin = input()
    print(translate_to_english(to_piglatin))
    return True

def translate_to_english(word):
    list_word = list(word)
    last_two_letters = list_word[-2:]
    if last_two_letters == ['a', 'e']:
        word = word[:-2]
        word= word[-2]+word[-1]+word[:-2]
        return word
main()