------------------------------------------------------> Mobil Uygulama Birim Testi <-----------------------------------------------------------------------------------------------

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

-----------------------------------------------------------> Arduino Testi <-------------------------------------------------------------------------------------------------------

Arduino sistemlerin entegrasyon testleri çalışabilirliği ile test edilmektedir. Ürün tasarlanırken her bir birim ayrı bir şekilde test edilmiştir. Her testten sonra sisteme yeni bir birim ekleyip test edilmiştir. 
Ayrıca C# üzerinden Arduuino_Test adlı birim testinde ev otomasyon sisteminde bulunan sensörlerin çalıştığı gösterilmektedir.
Test kodu indirilip C# ortamında çalıştırılır. Çalışan programda Arduinoya bağlı Com seçimi yapılır. Bu sayede çalışmakta olan sistemden veriler çekilir.  

