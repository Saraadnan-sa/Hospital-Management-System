#include "Inventory.hh"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm> // For string manipulation

Inventory::Inventory(std::string fname) : filename(fname) {}

void Inventory::addItem(Item item) {
    std::ifstream infile(filename);
    if (!infile) {
        std::cout << "Failed to open file." << std::endl;
        return;
    }

    std::string tempfile = "./data/temp.csv";
    std::ofstream outfile(tempfile);
    if (!outfile) {
        std::cout << "Failed to open file." << std::endl;
        infile.close();
        return;
    }

    bool itemFound = false;
    std::string newItemName = item.getName();
    std::transform(newItemName.begin(), newItemName.end(), newItemName.begin(), ::tolower); // Convert to lowercase for comparison

    std::string line;
    while (getline(infile, line)) {
        if (line.empty())
            continue;

        std::string itemName;
        int quantity;

        std::size_t pos = line.find(",");
        itemName = line.substr(0, pos);
        quantity = std::stoi(line.substr(pos + 1));

        std::string lowercaseItemName = itemName;
        std::transform(lowercaseItemName.begin(), lowercaseItemName.end(), lowercaseItemName.begin(), ::tolower); // Convert to lowercase for comparison

        if (lowercaseItemName == newItemName) {
            itemFound = true;
            quantity += item.getQuantity();
        }

        outfile << itemName << "," << quantity << std::endl;
    }

    if (!itemFound) {
        outfile << item.getName() << "," << item.getQuantity() << std::endl;
    }

    infile.close();
    outfile.close();

    if (remove(filename.c_str()) != 0) {
        std::cout << "Failed to remove file." << std::endl;
        return;
    }

    if (rename(tempfile.c_str(), filename.c_str()) != 0) {
        std::cout << "Failed to rename file." << std::endl;
        return;
    }
}

void Inventory::removeItem(std::string name) {
    std::ifstream infile(filename);
    if (!infile) {
        std::cout << "Failed to open file." << std::endl;
        return;
    }

    std::string tempfile = "./data/temp.csv";
    std::ofstream outfile(tempfile);
    if (!outfile) {
        std::cout << "Failed to open file." << std::endl;
        infile.close();
        return;
    }

    bool itemFound = false;
    std::string lowercaseName = name;
    std::transform(lowercaseName.begin(), lowercaseName.end(), lowercaseName.begin(), ::tolower); // Convert to lowercase for comparison

    std::string line;
    while (getline(infile, line)) {
        if (line.empty())
            continue;

        std::string itemName;
        int quantity;

        std::size_t pos = line.find(",");
        itemName = line.substr(0, pos);
        quantity = std::stoi(line.substr(pos + 1));

        std::string lowercaseItemName = itemName;
        std::transform(lowercaseItemName.begin(), lowercaseItemName.end(), lowercaseItemName.begin(), ::tolower); // Convert to lowercase for comparison

        if (lowercaseItemName == lowercaseName) {
            itemFound = true;
            std::cout << "Item removed from inventory." << std::endl;
        } else {
            outfile << line << std::endl;
        }
    }

    infile.close();
    outfile.close();

    if (!itemFound) {
        std::cout << "Item not found in inventory." << std::endl;
        if (remove(tempfile.c_str()) != 0) {
            std::cout << "Failed to remove file." << std::endl;
        }
        return;
    }

    if (remove(filename.c_str()) != 0) {
        std::cout << "Failed to remove file." << std::endl;
        return;
    }

    if (rename(tempfile.c_str(), filename.c_str()) != 0) {
        std::cout << "Failed to rename file." << std::endl;
        return;
    }
}

void Inventory::displayInventory() {
    std::ifstream infile(filename);
    if (!infile) {
        std::cout << "Failed to open file." << std::endl;
        return;
    }

    std::cout << std::left << std::setw(20) << "Item Name" << std::setw(10) << "Quantity" << std::endl;
    std::cout << std::setfill('-') << std::setw(30) << "-" << std::endl;
    std::cout << std::setfill(' ');

    std::string line;
    while (getline(infile, line)) {
        if (line.empty())
            continue;

        std::string itemName;
        int quantity;

        std::size_t pos = line.find(",");
        itemName = line.substr(0, pos);
        quantity = std::stoi(line.substr(pos + 1));

        std::cout << std::left << std::setw(20) << itemName << std::setw(10) << quantity << std::endl;
    }

    infile.close();
}
