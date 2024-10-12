package com.azienda.gestionedipendenti;

public class Dipendente {
    public String nome;
    public String cognome;
    public double stipendio;

    public Dipendente (String nome, String cognome, double stipendio) {
        this.nome = nome;
        this.cognome = cognome;
        this.stipendio = stipendio;
    }

    public void stampaDettagli () {
        System.out.println("nome:" + nome + "\ncognome:" + cognome + "\nstipendio:" + stipendio);
    }
}
