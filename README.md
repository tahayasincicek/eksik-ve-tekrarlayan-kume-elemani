# eksik-ve-tekrarlayan-kume-elemani

Algoritmanın Amacı: 
Bu algoritmanın amacı, bir dizi veya küme içinde bir sayının tekrarlanması nedeniyle başka bir sayının eksik olması durumunda, eksik sayıyı ve iki kez tekrarlanan sayıyı bulmaktır. Bu algoritma, veri kaybı veya hatalı veri girişi nedeniyle oluşan hataları tespit etmek için kullanılabilir.

Algoritma Ne İçin Kullanılır: 
Bu algoritma, veri kaybı veya hatalı veri girişi nedeniyle bir dizi veya küme içinde tekrarlanan veya eksik görüntülerin bulunması gereken birçok yerde kullanılabilir. Örneğin, bakım kayıtlarında bir yıpranmada bir tekrarlanan test sonucu veya eksik bir test sonucu varsa, bu tamamıyla hatanın tespit edilmesi ve bunların bulunması mümkündür. Ayrıca, finansal verilerde veya satış kayıtlarında da tekrarlanan veya eksik girilenleri tespit etmek için kullanılabilir. Veri analizi, veri madenciliği ve yapay zeka gibi alanlarda da bu işlemler kullanılabilir. Bu saklama, dosyaların içinde anlamlı örüntüleri kullanmak için kullanılabilir.

Algoritmanın Çalışma Şekli: 
İlk olarak, kullanıcıdan bir küme boyutunun alması ve bu boyuta göre bir dizi oluşturması istenir. Kullanıcı daha sonra bu kümenin parçalarını girer.Ardından, iki tane for döngüsü kullanarak, dizini içinde tekrarlanan sayıyı bulmak için tüm sayılar taranır ve karşılaştırılır. İki sayı aynıya rastlandığında, bu sayı tekrarlanan sayı olarak atanır.Daha sonra, kümenin toplamını hesaplayarak, eksik olan sayıyı bulmak için, n'e kadar olan boyutun toplamından kümenin toplamı çıkarılır. Eksik sayı bu şekilde sonuçlanır.Son olarak, tekrarlanan sayı ve eksik olan sayı bir diziye atılır ve bu dizi kullanılarak sonuçlar ekrana yazdırılır
