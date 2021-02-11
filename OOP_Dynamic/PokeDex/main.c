#include <stdio.h>
#include <string.h>
#define MAX_HLO_LKM 8


    struct POKEMON {
        int CP;
        int Lvl;
        char nimi [256];
    };

    int kysyInt (char*tulostus)
    {
        int paluuarvo = 0;
        printf(tulostus);
        scanf("%d", &paluuarvo);
        return paluuarvo;
    }
    void kysyString(char*tulostus, char* kysyttyMJono)
    {
        printf(tulostus);
        scanf("%s", kysyttyMJono);
    }
    void tulostaRivi(char* merkkijono)
     {
        printf(merkkijono);
        printf("\n");
     }
    void kysyPokemoninTiedot(struct POKEMON* pokemoninTiedot)
    {
        pokemoninTiedot->CP = kysyInt("Anna CP:");
        kysyString("Anna nimi:", pokemoninTiedot->nimi);
        pokemoninTiedot->Lvl = kysyInt("Anna Lvl:");

    }
    void tulostaPokemon(struct POKEMON* yksiPokemon)
    {
        printf("***POKEMON:\n");
        printf("NIMI: %s \n", yksiPokemon->nimi);
        printf("LVL: %d\n", yksiPokemon->Lvl);
        printf("CP: %d\n", yksiPokemon->CP);

    }



int main()
{
    struct POKEMON kaikkiPokemonit [MAX_HLO_LKM];
    int pokemonLkm = 0;
    int valinta = 0;

    do{
        tulostaRivi("Valitse seuraavista vaihtoehdoista:");
        tulostaRivi("1. Lisaa pokemon");
        tulostaRivi("2. Tulosta kaikki pokemonit");
        tulostaRivi("3. Poistu");
        tulostaRivi("4. Poista pokemonin tiedot");
        tulostaRivi("5. Etsi pokemoneja");
        valinta = kysyInt("Anna valintasi ( numero + enter):>");

        if (valinta == 1)
        {
            if (pokemonLkm < MAX_HLO_LKM)
            {
                kysyPokemoninTiedot(&kaikkiPokemonit[pokemonLkm]);
                pokemonLkm++;
            }
            else
            {
                tulostaRivi("Ei mahdu");
            }
        }
        else if (valinta == 2)
        {
            for (int i = 0 ; i < pokemonLkm; i++)
            {
                tulostaPokemon(&kaikkiPokemonit[i]);
            }
        }


        else if (valinta == 4)

        {
        pokemonLkm = 0;

        printf("Tiedot poistettu!\n");
    }
        else if (valinta == 5)
        {
            char etsinta[256];
                        printf("\nAnna etsittavan nimi:\n");
                        scanf(" %s", etsinta);
                        for (int i = 0; i < pokemonLkm; i++)
                        {
                            if (strstr(kaikkiPokemonit[i].nimi, etsinta) != NULL)
                            {
                                tulostaPokemon(&kaikkiPokemonit[i]);
                            }
                        }
        }
        }
    while (valinta != 3);



    return 0;
}
