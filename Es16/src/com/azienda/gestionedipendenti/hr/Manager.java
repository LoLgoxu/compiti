package com.azienda.gestionedipendenti.hr;

import com.azienda.gestionedipendenti.Dipendente;

public class Manager extends Dipendente {
    double bonus;

    public Manager(String nome, String cognome, double stipendio, double bonus) {
        super(nome, cognome, stipendio);
        this.bonus = bonus;
    }

    @Override
    public void stampaDettagli () {
        super.stampaDettagli();
        System.out.println("bonus:" + bonus);
    }
}
