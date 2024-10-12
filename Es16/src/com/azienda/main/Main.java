package com.azienda.main;

import com.azienda.gestionedipendenti.hr.Manager;

public class Main {
    public static void main(String[] args) {
        Manager manager1 = new Manager("Ciccio", "Baldo", 32132, 32323);
        manager1.stampaDettagli();
    }
}
