Segmentation Fault’a Neden Olan Durum:
    value işaretçisinin NULL olması, yani belleğin ayrılmamış olması.
GDB’nin Sorunu Belirlemede Nasıl Yardımcı Olduğu:
    GDB, hata anında backtrace komutu ile hangi fonksiyonlarda hata oluştuğunu, hangi satırda segfault meydana geldiğini ve değişkenlerin değerlerini incelemeyi sağlayarak sorunun kaynağını ortaya çıkardı.
"Definitely lost" Ne Anlama Gelir:
    Bellek, program tarafından ayrılmış fakat hiçbir şekilde serbest bırakılmamış; kesinlikle kaybedilmiş (yani bellek sızıntısı).
Serbest Bırakılmış Belleğe Yazmanın Tehlikesi:
    Böyle bir işlem, tanımsız davranışa neden olabilir; programın çökmesine veya beklenmedik sonuçlar doğurmasına yol açar.
Kamuya Açık (Public) Programda En Büyük Bellek Sızıntısını Hangi Fonksiyon Yaratıyor:
    Bu, analiz ettiğin programa bağlı; Valgrind çıktısını inceleyerek hangi fonksiyonun en çok belleği kaybettiğini tespit etmelisin.
En Kritik Hata Nasıl Düzeltilebilir:
    Belleğin doğru yerlerde malloc ile ayrılması ve free ile serbest bırakılması, özellikle geçersiz bellek erişimi durumunun önlenmesi için sıralamanın doğru yapılması gerekmektedir.
GDB ile İlgili:
    Programın Hangi Satırda Çöktüğünü Gösteren Komut Nedir?
        backtrace (kısaca bt)
    Belirli Bir Stack Frame’deki Bir Değişkenin Değerini Nasıl İncelersin?
        İlgili frame’e geçmek için frame <numara> komutunu kullanıp ardından print <değişken> komutuyla değeri inceleyebilirsin.
Valgrind ile İlgili:
    "Definitely lost" ile "Indirectly lost" Arasındaki Fark Nedir?
        Definitely lost: Bellek doğrudan ayrılmış ve referansını kaybetmiş, dolayısıyla kesinlikle serbest bırakılmamış.
        Indirectly lost: Birçok durumda, başka bir kaybolmuş bellek bloğu tarafından işaret edilen ve dolaylı olarak kaybedilen bellek.
    Neden Programları Valgrind ile Kullanırken -g ile Derlemek Önemlidir?
        -g bayrağı, hata ayıklama sembollerini ekler; bu sayede Valgrind çıktısında hangi satırda, hangi fonksiyonda hatanın oluştuğu daha ayrıntılı olarak görülebilir.
