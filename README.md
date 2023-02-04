# cell-tissue-organ-system-organism-data-structure
cell-tissue-organ-system-organism data structure implementation in c++

--TR--
Program çalışınca ilk iş olarak verilen veri.txt dosyası okunacaktır.Dosyada her satırda tek adette boşlukla ayrılmış sayılar vardır. Her sayı bir hücre nesnesinin DNA uzunluğunu temsil eder. Hücre nesneleri bir araya gelerek doku nesnesini oluşturmaktadır dolayısıyla her satırdaki sayı topluluğu bir doku nesnesidir. Bir ikili arama ağacına her doku, dokunun dna uzunluklarının radix sıralama algoritması ile küçükten büyüğe sıralanması sonucunda ortanca sayısına göre eklenir(eşitlik durumunda sol çocuk eklenir). Bu ikili arama ağaçları 20 adet doku tutar ve her ikili arama ağacı birer organ nesnesinin içinde barınır. Kısacası 20 adet doku bir adet organ eder. 100 adet organ nesnesi ise bir araya gelerek sistem nesnesini oluşturmalıdır. Sistemler ise bir araya gelerek organizma nesnesi oluşturur ve sistem sayısında kısıt olmamalıdır.

Organizma ekrana yazdırılmalıdır ve işlem şu şekilde yürür
  -Organ nesnesindeli ikili arama ağacı avl ağacı mantığına göre dengeli ise ekrana boşluk karakteri(' ')
  -Organ nesnesindeli ikili arama ağacı avl ağacı mantığına göre dengesiz ise ekrana diyez karakteri('#')
yazdırlır. Ekranda her sistem bir satır olarak gösterilmelidir.

Mutasyon olayı: 
 Organizma ekrana yazdırıldıktan sonra enter tuşuna basıldığında mutasyon olayı gerçekleşmelidir.
 Ağacın kökünde bulunan hücrenin DNA uzunluğu 50'ye tam bölünüyorsa bu organı oluşturan bütün hücrelerde DNA uzunluğu çift ise yarıya indirilerek mutasyon yapılmalıdır.
 Mutasyon işlemi gerçekleşen ağaçlar post order şekilde diziye atanıp dosyadan okuma mantığına göre tekrar oluşturulmalıdır.
 
Yeni organizma ekrana yazdırılarak program sonlandırılır.

--EN--
The first task when the program runs is to read the data.txt file. Each line in the file has numbers separated by a single space. Each number represents the DNA length of a cell object. Cell objects come together to form a tissue object, so each group of numbers in each line is a tissue object. Each tissue is added to a binary search tree based on the median of the DNA lengths of the tissue, sorted in ascending order using the radix sorting algorithm (in the case of equality, the left child is added). These binary search trees hold 20 tissues and each binary search tree is housed in one organ object. In short, 20 tissues form one organ. 100 organ objects come together to form a system object, and the number of systems forms the organism object without any limit.

The organism should be displayed on the screen and the process runs as follows:

If the binary search tree in the organ object is balanced according to the AVL tree logic, a space character (' ') is displayed on the screen.
If the binary search tree in the organ object is unbalanced according to the AVL tree logic, a hash character ('#') is displayed on the screen. Each system should be displayed as one line on the screen.
Mutation event:
 -After the organism is displayed on the screen, a mutation event occurs when the enter key is pressed.
 -If the DNA length of the cell at the root of the tree is exactly divided by 50 and the DNA length of all cells in the organ forming the tree is even, it is halved to perform the mutation. 
 -The trees that have undergone the mutation process are recorded in an array in post-order and recreated using the reading logic from the file.

The new organism is displayed on the screen and the program ends.
 

