# include <iostream>
extern int count ; // Relacionada con otro programa (Programa1)
extern void write_extern(void){
    std::cout << "Count is " << count << std::endl;
}

