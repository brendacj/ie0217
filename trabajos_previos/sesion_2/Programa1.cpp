# include <iostream>
int count ;
extern void write_extern(); // Relacioanda con otro porgrama (Programa2)

main() {
    count = 5;
    write_extern();
}
