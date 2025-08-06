#include <ncurses.h>
#include <unistd.h>

int main() {
    initscr();            // Inicia o modo ncurses
    noecho();             // Não mostra as teclas digitadas
    curs_set(FALSE);      // Esconde o cursor

    int x = 10, y = 10;
    int dx = 1, dy = 1;

    while (1) {
        clear();
        mvprintw(y, x, "o");  // Desenha a bola
        refresh();

        x += dx;
        y += dy;

        if (x <= 0 || x >= COLS) dx = -dx;
        if (y <= 0 || y >= LINES) dy = -dy;

        usleep(50000);  // Espera 50ms
    }

    endwin();  // Encerra o modo ncurses
    return 0;
}
