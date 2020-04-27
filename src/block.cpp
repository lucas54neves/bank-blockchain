#include <ctime>
#include <cstring>
#include <sstream>
#include <iostream>
#include "block.hpp"
#include "sha256.hpp"

using namespace std;

// Class constructor
Block::Block(string data, string previousHash, uint32_t i) {
    this->mData = data;
    this->mTimeStamp = time(0);
    this->mPreviousHash = previousHash;
    this->mIndex = i;
    this->mHash = CalculateHash();
}

// Returns the data
string Block::GetData() {
    return this->mData;
}

// Returns the hash of the previous block
string Block::GetPreviousHash() {
    return this->mPreviousHash;
}

// Returns the hash of the current block
string Block::GetHash() {
    return this->mHash;
}

// Returns the block creation time
time_t Block::GetTime() {
    return this->mTimeStamp;
}

// Return the index
uint32_t Block::GetIndex() {
    return this->mIndex;
}

// Calculates the block hash
string Block::CalculateHash() {
    stringstream ss;
    ss << mTimeStamp << mData << mPreviousHash << mIndex;
    return sha256(ss.str());
}

// Print the block to deploy
void Block::Print() {
    cout << "Block " << mIndex << endl;
    cout << "Data: " << mData << endl;
    cout << "Time: " << asctime(localtime(&mTimeStamp));
    cout << "Previous hash: " << mPreviousHash << endl;
    cout << "Hash: " << mHash << endl;
}