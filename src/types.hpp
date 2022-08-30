#pragma once

#include "headers.hpp"
//#include "miniwin.h"

#include <SFML/Graphics/Texture.hpp>

namespace Action {
enum Type : short;
}
struct RECT {
        int left;
        int top;
        int right;
        int bottom;
};
struct TextArea {
    bool HasText; // Steht Text in diesem Bereich?
    RECT textRect; // Die Position des Ausgabe
};

struct Coordinate {
    short x;
    short y;
};

typedef struct RGBSTRUCT {
    uint8_t r, g, b;
} RGBSTRUCT;

#pragma pack(push, 1)
struct RequiredMateral
{
    unsigned char Material;
    unsigned char Amount;
};

#pragma pack(pop)
#define MAX_REQUIRED_MATERIALS 6

struct GUY {
    bool IsActive; // Ist er aktiv?
    Action::Type CurrentAction; // Welche Aktion (Suchen, fischen ...) (Übergeordnet über Zustand)
    Coordinate Pos; // KachelPosition der Spielfigur
    Coordinate OriginalPosition; // Die ursprünglich Position in der Kachel (für die Aktionsprozeduren)
    Coordinate ScreenPosition; // Absolute Position der Spielfigur
    short AnimationState = Tiles::INVALID; // Was macht er gerade? (Animation)(linkslaufen,rechtslaufen...,angeln..)
    short ActionStep; // Bei welcher Aktion (für die Aktionsprozeduren)
    float ResourceAmount[Resources::Max]; // Wieviel Wasservorrat usw
    short Inventory[SPRITE_COUNT]; // Welche Rohstoffe usw. besitzt man
};

struct BMP {
    sf::Texture *Surface; // in welcher Surface gespeichert?
    bool IsAnimationRunning; // Läuft die Animations?
    short AnimationPhaseCount; // Anzahl der Animationsphasen
    short AnimationPhase; // die aktuelle Phase
    RECT sourceRect; // Quelle des 1. Bildes
    RECT targetRect; // Falls es immer an die gleiche Stelle gezeichnet wird. (Buttons)
    short Width; // Die Breite des Bildes
    short Height; // Die Hoehe des Bildes
    short Speed; // Wieviel Bilder/sec
    short Sound; // Welcher Sound gehört dazu
    //zum bauen
    RequiredMateral RequiredMaterials[MAX_REQUIRED_MATERIALS]; // Anzahl des i.Rohstoffs, den man zum Bau benötigt
    short RequiredActionCases; // Anzahl der Aktionsfaelle, die zum Bau benötigt werden
    bool First; // Ist es das erstemal gebaut, dann Hilfetext
    
    const char* Name; // name des tiles
};

struct WAV {
    const char *Filename; // Dateiname der Wavdatei
    bool Loop; // Nur einmal abspielen und ständig
    short Volume; // Die Standardlautstärke in Prozent
};

struct CREDITS {
    bool IsRunning; // Bewegt sich gerade
    short Picture; // welches Bild
};

struct SCAPE {
    short Type; // Flach, Hang usw.
    short Terrain; // Sand, Moor ...
    short Height; // Die Hoehe der Kachel
    bool Marked; // Ist diese Kachel markiert?
    short xScreen, yScreen; // Die Koordinaten in der Scape-Surface
    bool Walkable; // notwendig für Pathfinding
    bool Discovered; // Ist dieses Feld schon aufgedeckt?
    short Slowdown; // LaufZeit auf dieser Kachel (1 am schnellsten...)
    short Object = Tiles::INVALID; // Welches Objekt steht drauf (z.Bsp. Flüsse)
    bool ReverseAnimation; // Wird die Objektanimation umgekehrt abgespielt (für flüsse)
    Coordinate ObjectPosOffset; // Die Koordinaten des Objekts (relativ zu xScreen und yScreen)
    float AnimationPhase; // Welche Animationsphase oder Bildversion
    short ConstructionActionStep; // Welche Aktionsnummer (um Baustellen vortzusetzen)
    Coordinate GPosAlt; // Damit der Guy an der richtigen Stelle (x,y) weiterbaut
    RequiredMateral RequiredMaterials[MAX_REQUIRED_MATERIALS]; //Anzahl des i.Rohstoffs, den man noch zum bauen braucht
    float FireTimer; //Bis jetzt nur fürs Feuer nötig
};

struct RiverRun {
    short x, y;
};

using byte = uint8_t;
