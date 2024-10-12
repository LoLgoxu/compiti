package com.scuola.studenti;

public class Studente {
    private String nome;
    private String cognome;
    private int matricola;

    public Studente (String nome, String cognome, int matricola) {
        this.nome = nome;
        this.cognome = cognome;
        this.matricola = matricola;
    }

    public void stampaDettagli() {
        System.out.println("nome:" + nome + "\ncognome:" + cognome + "\nmatricola:" + matricola);
    }
}
