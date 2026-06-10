#include "gb_rom_values/gb_rom_values.h"

const struct GB_ROM gb_rom_values_jpn[] = {
    
    {// JPN_CRYSTAL
     .language = JPN_ID,
     .version = CRYSTAL_ID,
     .generation = 2,
     .method = METHOD_GEN2,
     .payload_size = 672,
     .box_data_size = 0x44E, // not known but probably same

     .print_string_start = 0xC4B7, //Shifted
     .stack_overwrite_location = 0xC0BD, // Found by seeing where  0x57AB is stored in the stack,  0x57AB is the code that calls PlaceString (PlaceTradePartnerNamesAndParty) in the JP version same as eng this was a nightmare to find just to be back in the same spot.
     .short_pkmn_name = 0x4E, // not found probably same
     .pointer_pkmn_name = 0,
     .padding_1 = 0,

     .clearScreen = 0x000FB2, // shifted
     .CableClub_TextBoxBorder = 0x0A4E80, // LinkTextboxAtHL mega shifted 
     .placeString = 0x001057, // shifted
     .Serial_ExchangeBytes = 0x075F, //Same as eng lol
     ._RemovePokemon = 0x03628E, // RemoveMonFromPartyOrBox shifted
     .SaveSAVtoSRAM1 = 0,
     .SaveSAVtoSRAM2 = 0,
     .LoadCurrentBoxData = 0,
     .OpenSRAM = 0x002F9D, // shifted
     .SaveBox = 0x054DEE, //shifted 
     .Bankswitch = 0,
     .SoftReset = 0x0150, // Reset same
     .CloseSRAM = 0, // Not needed but it is 0x02FAD
     .garbageDataLocation = 0x0770, //same

     .wRemoveMonFromBox = 0x01D0CB,   // wPokemonWithdrawDepositParameter MONSTER shift
     .wBoxCount = 0x01AD10,           // sBoxCount same 
     .wWhichPokemon = 0x01D0C9,       // wCurPartyMon shifted
     .wBoxDataStart = 0x01AD10,       // sBox  probably the same
     .wBoxDataEnd = 0x01B15E,         // sBoxEnd  probably the same
     .wSerialEnemyDataBlock = 0xD29C, // wOTPartyData shifted 
     .wEnemyMonSpecies = 0x01D237, //No idea what this is supposed to be going to assume it is wOTLinkBattleRNData?

     .wSerialEnemyMonsPatchList = 0xC6D0,                // wOTPatchLists same no shift!
     .wSerialOtherGameboyRandomNumberListBlock = 0xD237, // wOTLinkBattleRNData shifted
     .hSerialConnectionStatus = 0xFFCB, // same!

     .transferStringLocation = 0xC4B7, //Shifted
     .textBorderUppLeft = 0xC4B4, // transfer string shifted so yea this shifted too 
     .textBorderWidth = 12,
     .textBorderHeight = 1,
     .padding_2 = 0}};

const u16 gb_rom_values_jpn_size = static_cast<u16>(sizeof(gb_rom_values_jpn) / sizeof(struct GB_ROM));
