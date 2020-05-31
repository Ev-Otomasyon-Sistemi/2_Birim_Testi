-------------------------------------------------------> Mobil Uygulama Birim Testi <-----------------------------------------------------
Birim Testi: Yazılım programlamasında bir tasarım ve geliştirme yöntemidir.
Burada uygulamanın testi gerçekleştirilmiştir.
Uygulamaya giriş yapıldığında ayrı bir buton ile birim testi uygulamasına geçiş yapılıyor.(Şifre-kullanıcı adı girişi ile)
Testimizde ilk aşamasında arduino ile bağlantı kesme-bağlama işlemleri yapılmaktadır.
Sonraki aşamada evin sıcaklığını görmek istenildiğinde bağlantı yok ise bağlantı hatası verecektir.
Buradan da anlaşılacağı üzere şu aşamada tüm test işlemleri gerçekleşmemiştir fakat bağlantı kesildiğinde gerçekleşecek olan olaylar gösterilmektedir. 
(Projemizin şu aşamada arduino ve veritabanı kısmı eksiktir) İlerleyen aşamalarda daha detaylı bir test yapılacaktır.

Uygulamaya giriş yapmak için:
Kullanıcı adı = test
Şifre = 123

-----------------------------------------------------------> Arduino Birim Testi <------------------------------------------------------Sistemin test aşaması için Proteus programında gerekli devre çizimi yapıldı. Bağlantı kontrolleri gerçekleşti. Devrede girdi ve çıktı kontrolü sağlandı. Gerekli devre birimlerinde doğru voltaj değerinin varlığı devrenin başarı ile sonuç verdiğini kanıtlar.

Sistem kodunda test edilmesi gereken kısımlar test adında yeni bir proje açılarak gerekli kodlar yazıldı ve ardından programı ayrı parçalara ayırarak test için izole edildi. 

Arduino kütüphanesi tarafından sağlanan bazı destek işlevleri ArduinoTest2_arduino.cpp dosyasında mevcuttur. Kodun donanımı seri aygıtına ikili veriler yazdığında okunabilir çıktı üretmek için Arduino_Test.h yazıldı. C++ derleyicisinde derlene kodların çıktısı olan sonuç ve süre değerleri istenilen ile orantılı olması durumu testin başarılı olduğunu kanıtlar.
