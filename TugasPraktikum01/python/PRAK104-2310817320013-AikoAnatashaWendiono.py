A = 400000
B = 350000 

harga_diskon  = round(A * 13 / 100)
harga_diskon_2 = round(B * 21 / 100)

hasil = A - harga_diskon
hasil_2 = B - harga_diskon_2

print("Harga Sepatu A", A )
print("Harga Sepatu B", B )
print("Sepatu A mendapatkan Diskon 13% sehinnga harganya", hasil)
print("Sepatu B mendapatkan Diskon 21% sehinnga harganya", hasil_2)