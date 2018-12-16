#pragma once

const int KXPIXEL = 54; // Breite der Kacheln
const int KYPIXEL = 44; // Hoehe der Kacheln
const unsigned int S1XPIXEL = 20; // Breite der Schrift1
const unsigned int S1YPIXEL = 20; // Höhe der Schrift1
const unsigned int S1ABSTAND = 13; // Abstand zum nächsten Buchstaben
const unsigned int S2XPIXEL = 10; // Breite der Schrift2
const unsigned int S2YPIXEL = 15; // Höhe der Schrift2
const unsigned int S2ABSTAND = 10; // Abstand zum nächsten Buchstaben
const unsigned int MAXXKACH = 60; // Anzahl der Kacheln
const unsigned int MAXYKACH = 60;
const unsigned int MAXSCAPEX = 3360; // Größe der Scapesurface
const unsigned int MAXSCAPEY = 1700;
const unsigned int MAXX = 1280; // Bildschirmauflösung
const unsigned int MAXY = 720;
const unsigned int GIPFEL = 3; // Hoehe des Gipfels
const unsigned int MAXFLUSS = 1000; // Maximale Flusslänge
const unsigned int FLUSSANZAHL = 1; // Wieviele Flüsse? Mehr als 1 funktioniert seltsamerweise nicht mehr..
const unsigned int SKARTEX = 370; // Schatzkartenbreite
const unsigned int SKARTEY = 370; // Schatzkartenhöhe

enum Tiles
{
    MEERWELLEN = 0,
    FLUSS1 = MEERWELLEN + 1,
    FLUSS2 = MEERWELLEN + 2,
    FLUSS3 = MEERWELLEN + 3,
    FLUSS4 = MEERWELLEN + 4,
    FLUSS5 = MEERWELLEN + 5,
    FLUSS6 = MEERWELLEN + 6,
    FLUSS7 = MEERWELLEN + 7,
    FLUSS8 = MEERWELLEN + 8,
    FLUSS9 = MEERWELLEN + 9,
    FLUSS10 = MEERWELLEN + 10,
    MUENDUNG1 = MEERWELLEN + 11,
    MUENDUNG2 = MEERWELLEN + 12,
    MUENDUNG3 = MEERWELLEN + 13,
    MUENDUNG4 = MEERWELLEN + 14,
    QUELLE1 = MEERWELLEN + 15,
    QUELLE2 = MEERWELLEN + 16, // Wenn hier was eingefügt wird, auch die FillRohr ändern!!
    QUELLE3 = MEERWELLEN + 17,
    QUELLE4 = MEERWELLEN + 18,
    SCHLEUSE1 = MEERWELLEN + 19,
    SCHLEUSE2 = MEERWELLEN + 20,
    SCHLEUSE3 = MEERWELLEN + 21,
    SCHLEUSE4 = MEERWELLEN + 22,
    SCHLEUSE5 = MEERWELLEN + 23,
    SCHLEUSE6 = MEERWELLEN + 24,
    BAUM1 = 25,
    BAUM2 = BAUM1 + 1,
    BAUM3 = BAUM1 + 2,
    BAUM4 = BAUM1 + 3,
    BUSCH = BAUM1 + 4,
    BAUM1DOWN = BAUM1 + 5,
    BAUM2DOWN = BAUM1 + 6,
    BAUM3DOWN = BAUM1 + 7,
    BAUM4DOWN = BAUM1 + 8,
    BAUMGROSS = BAUM1 + 9,
    FEUER = BAUM1 + 10,
    WRACK = BAUM1 + 11,
    WRACK2 = BAUM1 + 12,
    FELD = 38,
    ZELT = FELD + 1,
    BOOT = FELD + 2,
    ROHR = FELD + 3,
    SOS = FELD + 4,
    HAUS1 = FELD + 5,
    HAUS2 = FELD + 6,
    HAUS3 = FELD + 7,
    FEUERSTELLE = FELD + 8,
    CUPFEIL = 47,
    CURICHTUNG = CUPFEIL + 1,
    CUUHR = CUPFEIL + 2,
    GUYLINKS = 50,
    GUYOBEN = GUYLINKS + 1,
    GUYRECHTS = GUYLINKS + 2,
    GUYUNTEN = GUYLINKS + 3,
    GUYSUCHEN = GUYLINKS + 4,
    GUYESSEN = GUYLINKS + 5,
    GUYTRINKEN = GUYLINKS + 6,
    GUYFAELLEN = GUYLINKS + 7,
    GUYWARTEN = GUYLINKS + 8,
    GUYFELD = GUYLINKS + 9,
    GUYBINDENOBEN = GUYLINKS + 10,
    GUYBINDENUNTEN = GUYLINKS + 11,
    GUYSCHLAFEN = GUYLINKS + 12,
    GUYSCHLAFZELT = GUYLINKS + 13,
    GUYGEHINZELT = GUYLINKS + 14,
    GUYHINLEGEN = GUYLINKS + 15,
    GUYAUFSTEHEN = GUYLINKS + 16,
    GUYANGELN1LINKS = GUYLINKS + 17,
    GUYANGELN1OBEN = GUYLINKS + 18,
    GUYANGELN1RECHTS = GUYLINKS + 19,
    GUYANGELN1UNTEN = GUYLINKS + 20,
    GUYANGELN2LINKS = GUYLINKS + 21,
    GUYANGELN2OBEN = GUYLINKS + 22,
    GUYANGELN2RECHTS = GUYLINKS + 23,
    GUYANGELN2UNTEN = GUYLINKS + 24,
    GUYANGELN3LINKS = GUYLINKS + 25,
    GUYANGELN3OBEN = GUYLINKS + 26,
    GUYANGELN3RECHTS = GUYLINKS + 27,
    GUYANGELN3UNTEN = GUYLINKS + 28,
    GUYSCHLAGEN = GUYLINKS + 29,
    GUYBOOTLINKS = GUYLINKS + 30,
    GUYBOOTOBEN = GUYLINKS + 31,
    GUYBOOTRECHTS = GUYLINKS + 32,
    GUYBOOTUNTEN = GUYLINKS + 33,
    GUYBOOTANGELN1 = GUYLINKS + 34,
    GUYBOOTANGELN2 = GUYLINKS + 35,
    GUYBOOTANGELN3 = GUYLINKS + 36,
    GUYTAUCHEN1 = GUYLINKS + 37,
    GUYTAUCHEN2 = GUYLINKS + 38,
    GUYTAUCHEN3 = GUYLINKS + 39,
    GUYHAMMER = GUYLINKS + 40,
    GUYKLETTERN1 = GUYLINKS + 41,
    GUYKLETTERN2 = GUYLINKS + 42,
    GUYHAMMER2 = GUYLINKS + 43,
    GUYGEHINHAUS = GUYLINKS + 44,
    GUYSCHLAFHAUS = GUYLINKS + 45,
    GUYGEHAUSHAUS = GUYLINKS + 46,
    GUYANZUENDEN = GUYLINKS + 47,
    GUYAUSSCHAU = GUYLINKS + 48,
    GUYSCHAUFELN = GUYLINKS + 49,
    GUYSCHIFF = GUYLINKS + 50,
    GUYSCHIFFDOWN = GUYLINKS + 51,
    GUYSCHWIMMEN = GUYLINKS + 52,
    GUYTOD = GUYLINKS + 53,
    GUYBOOTTOD = GUYLINKS + 54,
    GUYBOOTWARTEN = GUYLINKS + 55,
    GUYSCHLEUDER = GUYLINKS + 56,
    BUTTGITTER = 107,
    BUTTANIMATION = BUTTGITTER + 1,
    BUTTBEENDEN = BUTTGITTER + 2,
    BUTTNEU = BUTTGITTER + 3,
    BUTTTAGNEU = BUTTGITTER + 4,
    BUTTSOUND = BUTTGITTER + 5,
    BUTTAKTION = BUTTGITTER + 6,
    BUTTBAUEN = BUTTGITTER + 7,
    BUTTINVENTAR = BUTTGITTER + 8,
    BUTTWEITER = BUTTGITTER + 9,
    BUTTSTOP = BUTTGITTER + 10,
    BUTTABLEGEN = BUTTGITTER + 11,
    BUTTSUCHEN = 119,
    BUTTESSEN = BUTTSUCHEN + 1,
    BUTTSCHLAFEN = BUTTSUCHEN + 2,
    BUTTFAELLEN = BUTTSUCHEN + 3,
    BUTTANGELN = BUTTSUCHEN + 4,
    BUTTANZUENDEN = BUTTSUCHEN + 5,
    BUTTAUSSCHAU = BUTTSUCHEN + 6,
    BUTTSCHATZKARTE = BUTTSUCHEN + 7,
    BUTTSCHATZ = BUTTSUCHEN + 8,
    BUTTSCHLEUDER = BUTTSUCHEN + 9,
    BUTTZELT = 129,
    BUTTFELD = BUTTZELT + 1,
    BUTTBOOT = BUTTZELT + 2,
    BUTTROHR = BUTTZELT + 3,
    BUTTSOS = BUTTZELT + 4,
    BUTTHAUS1 = BUTTZELT + 5,
    BUTTHAUS2 = BUTTZELT + 6,
    BUTTHAUS3 = BUTTZELT + 7,
    BUTTFEUERST = BUTTZELT + 8,
    BUTTFRAGEZ = BUTTZELT + 9,
    BUTTDESTROY = BUTTZELT + 10,
    SAEULE1 = 140,
    SAEULE2 = SAEULE1 + 1,
    SAEULE3 = SAEULE1 + 2,
    ROHAST = 143,
    ROHSTAMM = ROHAST + 1,
    ROHSTEIN = ROHAST + 2,
    ROHAXT = ROHAST + 3,
    ROHBLATT = ROHAST + 4,
    ROHEGGE = ROHAST + 5,
    ROHLIANE = ROHAST + 6,
    ROHANGEL = ROHAST + 7,
    ROHHAMMER = ROHAST + 8,
    ROHFERNROHR = ROHAST + 9,
    ROHSTREICHHOLZ = ROHAST + 10,
    ROHSCHAUFEL = ROHAST + 11,
    ROHKARTE = ROHAST + 12,
    ROHSCHLEUDER = ROHAST + 13,
    ROEMISCH1 = 157,
    ROEMISCH2 = ROEMISCH1 + 1,
    INVPAPIER = 159,
    RING = INVPAPIER + 1,
    KREUZ = INVPAPIER + 2,
    JA = INVPAPIER + 3,
    NEIN = INVPAPIER + 4,
    SONNE = INVPAPIER + 5,
    PROGRAMMIERUNG = 165,
    DIRKPLATE = PROGRAMMIERUNG + 1,
    MATTHIAS = PROGRAMMIERUNG + 2,
    TOBIAS = PROGRAMMIERUNG + 3,
    SIGRID = PROGRAMMIERUNG + 4,
    SOUNDS = PROGRAMMIERUNG + 5,
    PATHFINDING = PROGRAMMIERUNG + 6,
    JOHN = PROGRAMMIERUNG + 7,
    HEIKO = PROGRAMMIERUNG + 8,
    GISELA = PROGRAMMIERUNG + 9,
    WEITEREHILFE = PROGRAMMIERUNG + 10,
    TESTSPIELER = PROGRAMMIERUNG + 11,
    SCHWARZ = PROGRAMMIERUNG + 12,
    MUSIK = PROGRAMMIERUNG + 13,
    DPSOFTWARE = PROGRAMMIERUNG + 14,
    BILDANZ = DPSOFTWARE + 1, // Wieviele Bilder
};

// Textfelder
enum Textfields
{
    TXTTEXTFELD = 0,
    TXTFPS = 1,
    TXTTAGESZEIT = 2,
    TXTCHANCE = 3,
    TXTPAPIER = 4, // Muß!!! als letztes stehen
    TEXTANZ = 5, // Wieviele Textbreiche
};

// Resourcen
enum Resources
{
    WASSER = 0,
    NAHRUNG = 1,
    GESUNDHEIT = 2,
};

// Bilder
static const char Misc[] = "MISC";
static const char Panel[] = "PANEL";
static const char GuyAni[] = "GUYANI";
static const char Animation[] = "ANIMATION";
static const char Schrift1[] = "SCHRIFT1";
static const char Schrift2[] = "SCHRIFT2";
static const char TextFeld[] = "TEXTFELD";
static const char Papier[] = "PAPIER";
static const char Baum[] = "BAUM";
static const char Cursorbmp[] = "CURSORBMP";
static const char Buttons[] = "BUTTONS";
static const char Inventarbmp[] = "INVENTARBMP";
static const char Bau[] = "BAU";
static const char Credits[] = "CREDITS";
static const char Logo[] = "LOGO";
