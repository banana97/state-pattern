State pattern არის ქცევითი დიზაინ პატერნის სახე, რომელიც ფართოდ გამოიყენება სხვადასხვა აპლიკაციებში. ობიექტზე ორიენტირებულ პროგრამირებაში, ობიექტმა შეიძლება შეიცვალოს ქცევა მისი მდგომარეობიდან გამომდინარე. state pattern ახდენს ობიექტის მდგომარეობისა და ქცევის იმპლემენტაციას, აღნიშნულის გამოყენებით შეგვიძლია დავაოპტიმიზიროთ ობიექტის მდომარეობის განმკარგველი მეთოდები. 
state pattern-ში ობიექტს შეიძლება ჰქონდეს განსხვავებული მდგომარეობები. თითოეულმა მდგომარეობამ იცის თუ რა იქნება შემდეგი მდგომარეობა (მდგომარეობები შესაძოა დაემატოს ან დააკლდეს). 
ეს არქიტექტურა ძირითადად სამი ტიპის კლასისგან შედგება:
Context Class - ამ კლასში შენახულია მდგომარეობები და პასუხისმგებელია ამ მდგომარეობის maintenance-ზე. 
State Class - აბსტრაქტული საბაზისო კლასი, რომელიც ინახავს განსხვავებულ მდგომარეობებს. იყენებს this კლას პოინტერს, რაც ფუნქციონირებს როგორც მიმდინარე მდგომალეობაზე მიმთითებელი. 
Concentrate Class - ეს კლასი ახდენს მდგომარეობისა და ობიექტის მახასიათებელი ქცევების იმპლემენტაციას. 

მაგალითი:
მარტივად, ავიღოთ მზისა განსხვავებული მდგომარეობები (დილა, საღამო, ღამე).
მზის საწყის მდგომარეობად განვიხილოთ დილა, დილამ იცის რომ მას მოსდევს საღამო, საღამომ იცის რომ მას მოჰყვება ღამე, ხოლო ღამემ იცის რომ მის შემდეგ დგება ისევ დილა. 
როდესაც ობიექტი მიიღებს ბრძანებას მდგომარეობის შეცვლის შესახებ, ის ჰკითხავს მის ამჟამინდელ მდგომარეობას თუ რა არის მისიი შემდეგი მდგომარეობა და შემდგომ გარდაიქმნება და ბრუნდება ახალ მდგომარეობაში.
ასევე მნიშვნელოვანია ახალი მდგომარეობის დამატება (დავამატოთ შუადღე).
განვსაზღვროთ ახალი "შუადღე კლასი" (Concentrate Class-ში)
მივანიჭოთ თუ რა არის ამ მდგომარეობის შემდეგი მდგომარეობა (საღამო)
გვქონდეს ეს მდგომარეობა რაიმე სხვა მდგომარეობის შემდეგ მდგომარეობად (დილის შემდეგი მდგომარეობა გახდება შუადღე).
