#ifndef BLOCK_HPP
#define BLOCK_HPP

using namespace std;

// Block class
class Block {
    public:
        // Class constructor
        Block(string data, string previousHash, uint32_t i);
        // Returns the data
        string GetData();
        // Returns the hash of the previous block
        string GetPreviousHash();
        // Returns the hash of the current block
        string GetHash();
        // Returns the block creation time
        time_t GetTime();
        // Return the index
        uint32_t GetIndex();
        // Calculates the block hash
        string CalculateHash();
        void Print();
    private:
        // Data saved in the block
        string mData;
        // Block creation time
        time_t mTimeStamp;
        // Hash of previous hash
        string mPreviousHash;
        // Hash of current block
        string mHash;
        // Block index
        uint32_t mIndex;
};

#endif // BLOCK_HPP