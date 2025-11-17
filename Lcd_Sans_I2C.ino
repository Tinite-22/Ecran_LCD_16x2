#include <LiquidCrystal.h>    // On importe la bibliothèque qui permet de contrôler un écran LCD

// On crée un objet "lcd" en précisant à quels pins il est connecté sur l'Arduino
// LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // On initialise l'écran LCD avec 16 colonnes et 2 lignes
  lcd.begin(16, 2);

  // On affiche du texte sur la première ligne de l'écran
  lcd.print("Hello World!");   // Le texte s'affiche automatiquement à partir de la colonne 0, ligne 0
}

void loop() {
  // On place le curseur à un emplacement précis de l'écran
  // lcd.setCursor(colonne, ligne)
  lcd.setCursor(0, 1);   // colonne 0, ligne 1 (donc début de la 2e ligne)

  // On écrit le texte sur la 2e ligne
  lcd.print("Arduino+LCD!");
}
