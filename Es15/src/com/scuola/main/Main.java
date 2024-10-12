package com.scuola.main;

import com.scuola.studenti.Studente;

public class Main {
    public static void main(String[] args) {
        Studente studente1 = new Studente("Fero", "Rossi", 132424);
        studente1.stampaDettagli();
    }
}
