def decode_hex_lists(hex_lists):
    ascii_strings = []
    for hex_list in hex_lists:
        ascii_chars = [chr(int(h, 16)) for h in hex_list]
        ascii_string = ''.join(ascii_chars)
        ascii_strings.append(ascii_string)
    return ascii_strings

#O-1
hex_lists1 = [['56','6F','75','67','68','74']]
print(decode_hex_lists(hex_lists1))

#O-2
hex_lists2 = [['49','6E','76','61','64','65'], ['4D','69','6C','69','74','61','72','79']]
print(decode_hex_lists(hex_lists2))