#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void z1() {
    FILE* input, * output;
    char buffer[255];


    input = fopen("promienie.txt", "r");
    output = fopen("wynik.txt", "w");


    if (input == NULL) {
        perror("Błąd otwarcia pliku");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), input) != NULL) {
        printf("%s", buffer);
        int radius = atoi(&buffer);
        double area = radius * radius * 3.14;

        fprintf(output, "%lf\n", area);

    }
    fclose(input);
    fclose(output);
}
void z2() {
    FILE* input, * output;
    char buffer[255];

    input = fopen("liczby.txt", "r");

    if (input == NULL) {
        perror("Błąd otwarcia pliku dane.txt");
        return 1;
    }

    output = fopen("wynik.txt", "w");

    if (output == NULL) {
        perror("Błąd otwarcia pliku wynik.txt");
        fclose(input);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), input) != NULL) {
        int number = atoi(buffer);

        int lastDigit = number % 10;
        if (lastDigit == 0 || lastDigit == 3 || lastDigit == 8 || lastDigit == 9) {
            fprintf(output, "%d\n", number);
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}
int z3(const char* wejsciowyPlik, const char* wyjsciowyPlik) {
    FILE* wejscie, * wyjscie;
    char znak;
    int liczbaZnakow = 0;


    wejscie = fopen(wejsciowyPlik, "r");
    if (wejscie == NULL) {
        perror("Błąd otwarcia pliku wejściowego");
        return -1;
    }

    wyjscie = fopen(wyjsciowyPlik, "w");
    if (wyjscie == NULL) {
        perror("Błąd otwarcia pliku wyjściowego");
        fclose(wejscie);
        return -1; 
    }

    while ((znak = fgetc(wejscie)) != EOF) {
        fputc(znak, wyjscie);
        liczbaZnakow++;
    }

    fclose(wejscie);
    fclose(wyjscie);

    return liczbaZnakow;
}
long long extractNumber(long long pesel, int slot) {
    long long temp = 10;
    if (slot == 11) {
        return pesel % 10;
    }
    if (slot == 10) {
        return (pesel / 10) % 10;
    }
    for (int i = 9; i >= slot; i--) {
        temp = temp * 10;

    }
    return (pesel / temp) % 10;
}
void z4() {
    //wiemy że każdy pesel składa sie z 11 cyfr.
    //przedostatnia liczbe mozemy uzyskac poprzez dzielenie modulo 100
    FILE* input, * output;
    char buffer[255];
    int mezczyzni = 0, kobiety = 0, urodzeniWListopadzie=0, blednePesele=0;


    input = fopen("dane.txt", "r");
    output = fopen("wynik.txt", "w");


    if (input == NULL) {
        perror("Błąd otwarcia pliku");
        return 1;
    }
    if (output == NULL) {
        perror("Błąd otwarcia pliku");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), input) != NULL) {
        //printf("%s", buffer);
        long long pesel = atoll(&buffer);
        int przedOstatniaCyfraPeselu = (pesel/10)%10;
        int trzecia = (pesel / 100000000) % 10;
        int czwarta = (pesel / 10000000) % 10;
        //printf("%c", buffer[10]);
        if (przedOstatniaCyfraPeselu % 2 == 0) {
            kobiety++;
        }
        else {
            mezczyzni++;
        }
        if (trzecia == 1 | trzecia == 3 && czwarta == 1) {
            urodzeniWListopadzie++;
        }
        int suma = extractNumber(pesel, 1) + extractNumber(pesel, 5) + extractNumber(pesel, 11) + (extractNumber(pesel, 2) + extractNumber(pesel, 6) + extractNumber(pesel, 10))*3 + (extractNumber(pesel, 3) + extractNumber(pesel, 7))*7 + (extractNumber(pesel, 4) + extractNumber(pesel, 8)*9);
        if (!(suma % 10 == 0)) {
            blednePesele++;
            fprintf("%lld\n", pesel);
        }

    }
    printf("Mezczyzni: %d Kobiety %d\n", mezczyzni, kobiety);
    printf("Urodzeni w Listopadzie: %d\n", urodzeniWListopadzie);
    printf("Bledne nr pesel: %d\n", blednePesele);
    fclose(input);
    fclose(output);
}


int main(int argc, char* argv[]) {

//    z1();
    //z3
    /*
    if (argc != 3) {
        printf("Sposób użycia: %s <nazwa_wejsciowego_pliku> <nazwa_wyjsciowego_pliku>\n", argv[0]);
        return 1;
    }

    int liczbaZnakow = z3(argv[1], argv[2]);

    if (liczbaZnakow >= 0) {
        printf("Liczba znaków w pliku: %d\n", liczbaZnakow);
    }
    else {
        printf("Wystąpił błąd.\n");
    }
    */
    z4();
 

}
