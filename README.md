
<h1 align="center"> Advance topics of C++, Object oriented programming </h1>

<p> 
  Here, all the files are in c++, covering advance topics of Objest Oriented Programming (OOP) like classes, public and private access modifiers, function prototyping
  and much more... 
</p>
  
<details><summary>C++ Classes In Nutshell</summary>
<p>

#### Private (Default) are only accesse by other functions whereas public can be accesse by everyone.

```
  #include <iostream>
  using namespace std;
  
  class shop {
      int itemID[10]; // By default this is private.
      int itemPrice[10];
      int counter;
  public:
      void initcounter(void){counter = 0;} //Every new obj made by using this class will have a default contract = 0;
      void setPrice(void);
      void displayPrice(void);
  
  };
  void shop :: setPrice(void){
    cout<<"Enter ItemID "<<endl;
    cin>>itemID[counter]>>endl;
    cout<<"Enter Item Price"<<endl;
    cin>>itemPrice[counter]>>endl;
    counter++;
  }
  void shop ::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of the Item with ID- "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
    }
    
}
  
  int main(){
   shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();                                                                                
                                                                                        
  return 0;
  }
  
```

</p>
</details>
  
### Concepts in File...
  
|File Name | Concepts | Discription |
| --- | --- | --- |
| opp | Classes and access modifiers | using classes which is a template to create real world objects. |
| arraysinclasses | Arrays in Classes | Taking input in arrays and displaying them |
| table | While, do-while and for | Using while, do-while and for loop to print the table of 6 |
| Polymorphism | Polymorphism two types | Compile time polymorphism and run time polymorphism. | 


![Screenshot (351)](https://user-images.githubusercontent.com/94203408/177679446-3363d441-b121-4b3b-9239-18570b80d8be.png)

