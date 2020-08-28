//
// Created by OEM on 28/08/2020.
//
#include "GameManager.h"

/**
 * Save the information into a text file
 * @param filename the name of the text file
 */
void GameManager::save(string &filename) {
    ofstream ofs (filename,ofstream::out);

    ofs << Game::toString();

    ofs.close();
}