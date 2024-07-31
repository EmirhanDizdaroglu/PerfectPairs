# Common Divisors and Product Check

Bu C programı, iki pozitif tam sayının ortak bölenlerinin toplamı ve çarpımı ile belirli bir koşulu sağlayan sayı çiftlerini bulur ve ekrana yazdırır.

## Kodun Amacı

Program, verilen bir üst sınır `n` altında tüm `x` ve `y` çiftlerini test eder ve bu çiftlerin belirli bir matematiksel koşulu sağlayıp sağlamadığını kontrol eder. Koşul, `x * y`'nin, `CDS(x, y) * CDP(x, y)`'ye eşit olup olmamasına dayanır.

- **`CDS(x, y)`**: `x` ve `y`'nin ortak bölenlerinin toplamını hesaplar.
- **`CDP(x, y)`**: `x` ve `y`'nin ortak bölenlerinin çarpımını hesaplar.

## Fonksiyonlar

### `int CDS(int x, int y)`

İki sayının ortak bölenlerinin toplamını hesaplar.

- **Girdi**: `int x`, `int y`
- **Çıktı**: Ortak bölenlerin toplamı

### `int CDP(int x, int y)`

İki sayının ortak bölenlerinin çarpımını hesaplar.

- **Girdi**: `int x`, `int y`
- **Çıktı**: Ortak bölenlerin çarpımı

### `int main()`

- Kullanıcıdan bir tam sayı `n` alır.
- `x` ve `y` için `1`'den başlayarak `n-1`'e kadar olan tüm kombinasyonları test eder.
- Eğer `x * y == CDS(x, y) * CDP(x, y)` koşulu sağlanıyorsa, `(x, y)` çiftini ekrana yazdırır.

## Kullanım

1. Programı derleyin:
   ```sh
   gcc -o common_divisors common_divisors.c
