#ifdef ELEMENT_NUMBERS_CALL
# define ELEMENT_DEFINE(name, id) elements[id].Element_ ## name ()
#endif
#ifdef ELEMENT_NUMBERS_DECLARE
# define ELEMENT_DEFINE(name, id) void Element_ ## name ()
#endif
#ifdef ELEMENT_NUMBERS_ENUMERATE
# define ELEMENT_DEFINE(name, id) constexpr int PT_ ## name = id
#endif

ELEMENT_DEFINE(NONE, 0);
ELEMENT_DEFINE(DUST, 1);
ELEMENT_DEFINE(WATR, 2);
ELEMENT_DEFINE(OIL, 3);
ELEMENT_DEFINE(FIRE, 4);
ELEMENT_DEFINE(STNE, 5);
ELEMENT_DEFINE(LAVA, 6);
ELEMENT_DEFINE(GUNP, 7);
ELEMENT_DEFINE(NITR, 8);
ELEMENT_DEFINE(CLNE, 9);
ELEMENT_DEFINE(GAS, 10);
ELEMENT_DEFINE(PLEX, 11);
ELEMENT_DEFINE(GOO, 12);
ELEMENT_DEFINE(ICEI, 13);
ELEMENT_DEFINE(METL, 14);
ELEMENT_DEFINE(SPRK, 15);
ELEMENT_DEFINE(SNOW, 16);
ELEMENT_DEFINE(WOOD, 17);
ELEMENT_DEFINE(NEUT, 18);
ELEMENT_DEFINE(PLUT, 19);
ELEMENT_DEFINE(PLNT, 20);
ELEMENT_DEFINE(ACID, 21);
ELEMENT_DEFINE(VOID, 22);
ELEMENT_DEFINE(WTRV, 23);
ELEMENT_DEFINE(CNCT, 24);
ELEMENT_DEFINE(DSTW, 25);
ELEMENT_DEFINE(SALT, 26);
ELEMENT_DEFINE(SLTW, 27);
ELEMENT_DEFINE(DMND, 28);
ELEMENT_DEFINE(BMTL, 29);
ELEMENT_DEFINE(BRMT, 30);
ELEMENT_DEFINE(PHOT, 31);
ELEMENT_DEFINE(URAN, 32);
ELEMENT_DEFINE(WAX, 33);
ELEMENT_DEFINE(MWAX, 34);
ELEMENT_DEFINE(PSCN, 35);
ELEMENT_DEFINE(NSCN, 36);
ELEMENT_DEFINE(LNTG, 37);
ELEMENT_DEFINE(INSL, 38);
ELEMENT_DEFINE(BHOL, 39);
ELEMENT_DEFINE(WHOL, 40);
ELEMENT_DEFINE(RBDM, 41);
ELEMENT_DEFINE(LRBD, 42);
ELEMENT_DEFINE(NTCT, 43);
ELEMENT_DEFINE(SAND, 44);
ELEMENT_DEFINE(GLAS, 45);
ELEMENT_DEFINE(PTCT, 46);
ELEMENT_DEFINE(BGLA, 47);
ELEMENT_DEFINE(THDR, 48);
ELEMENT_DEFINE(PLSM, 49);
ELEMENT_DEFINE(ETRD, 50);
ELEMENT_DEFINE(NICE, 51);
ELEMENT_DEFINE(NBLE, 52);
ELEMENT_DEFINE(BTRY, 53);
ELEMENT_DEFINE(LCRY, 54);
ELEMENT_DEFINE(STKM, 55);
ELEMENT_DEFINE(SWCH, 56);
ELEMENT_DEFINE(SMKE, 57);
ELEMENT_DEFINE(DESL, 58);
ELEMENT_DEFINE(COAL, 59);
ELEMENT_DEFINE(LO2, 60);
ELEMENT_DEFINE(O2, 61);
ELEMENT_DEFINE(INWR, 62);
ELEMENT_DEFINE(YEST, 63);
ELEMENT_DEFINE(DYST, 64);
ELEMENT_DEFINE(THRM, 65);
ELEMENT_DEFINE(GLOW, 66);
ELEMENT_DEFINE(BRCK, 67);
ELEMENT_DEFINE(CFLM, 68);
ELEMENT_DEFINE(FIRW, 69);
ELEMENT_DEFINE(FUSE, 70);
ELEMENT_DEFINE(FSEP, 71);
ELEMENT_DEFINE(AMTR, 72);
ELEMENT_DEFINE(BCOL, 73);
ELEMENT_DEFINE(PCLN, 74);
ELEMENT_DEFINE(HSWC, 75);
ELEMENT_DEFINE(IRON, 76);
ELEMENT_DEFINE(MORT, 77);
ELEMENT_DEFINE(LIFE, 78);
ELEMENT_DEFINE(DLAY, 79);
ELEMENT_DEFINE(CO2, 80);
ELEMENT_DEFINE(DRIC, 81);
ELEMENT_DEFINE(CBNW, 82);
ELEMENT_DEFINE(STOR, 83);
ELEMENT_DEFINE(PVOD, 84);
ELEMENT_DEFINE(CONV, 85);
ELEMENT_DEFINE(CAUS, 86);
ELEMENT_DEFINE(LIGH, 87);
ELEMENT_DEFINE(TESC, 88);
ELEMENT_DEFINE(DEST, 89);
ELEMENT_DEFINE(SPNG, 90);
ELEMENT_DEFINE(RIME, 91);
ELEMENT_DEFINE(FOG, 92);
ELEMENT_DEFINE(BCLN, 93);
ELEMENT_DEFINE(LOVE, 94);
ELEMENT_DEFINE(DEUT, 95);
ELEMENT_DEFINE(WARP, 96);
ELEMENT_DEFINE(PUMP, 97);
ELEMENT_DEFINE(FWRK, 98);
ELEMENT_DEFINE(PIPE, 99);
ELEMENT_DEFINE(FRZZ, 100);
ELEMENT_DEFINE(FRZW, 101);
ELEMENT_DEFINE(GRAV, 102);
ELEMENT_DEFINE(BIZR, 103);
ELEMENT_DEFINE(BIZRG, 104);
ELEMENT_DEFINE(BIZRS, 105);
ELEMENT_DEFINE(INST, 106);
ELEMENT_DEFINE(ISOZ, 107);
ELEMENT_DEFINE(ISZS, 108);
ELEMENT_DEFINE(PRTI, 109);
ELEMENT_DEFINE(PRTO, 110);
ELEMENT_DEFINE(PSTE, 111);
ELEMENT_DEFINE(PSTS, 112);
ELEMENT_DEFINE(ANAR, 113);
ELEMENT_DEFINE(VINE, 114);
ELEMENT_DEFINE(INVIS, 115);
ELEMENT_DEFINE(E116, 116);
ELEMENT_DEFINE(SPAWN2, 117);
ELEMENT_DEFINE(SPAWN, 118);
ELEMENT_DEFINE(SHLD1, 119);
ELEMENT_DEFINE(SHLD2, 120);
ELEMENT_DEFINE(SHLD3, 121);
ELEMENT_DEFINE(SHLD4, 122);
ELEMENT_DEFINE(LOLZ, 123);
ELEMENT_DEFINE(WIFI, 124);
ELEMENT_DEFINE(FILT, 125);
ELEMENT_DEFINE(ARAY, 126);
ELEMENT_DEFINE(BRAY, 127);
ELEMENT_DEFINE(STKM2, 128);
ELEMENT_DEFINE(BOMB, 129);
ELEMENT_DEFINE(C5, 130);
ELEMENT_DEFINE(SING, 131);
ELEMENT_DEFINE(QRTZ, 132);
ELEMENT_DEFINE(PQRT, 133);
ELEMENT_DEFINE(EMP, 134);
ELEMENT_DEFINE(BREC, 135);
ELEMENT_DEFINE(ELEC, 136);
ELEMENT_DEFINE(ACEL, 137);
ELEMENT_DEFINE(DCEL, 138);
ELEMENT_DEFINE(BANG, 139);
ELEMENT_DEFINE(IGNT, 140);
ELEMENT_DEFINE(BOYL, 141);
ELEMENT_DEFINE(GEL, 142);
ELEMENT_DEFINE(TRON, 143);
ELEMENT_DEFINE(TTAN, 144);
ELEMENT_DEFINE(EXOT, 145);
ELEMENT_DEFINE(E146, 146);
ELEMENT_DEFINE(EMBR, 147);
ELEMENT_DEFINE(H2, 148);
ELEMENT_DEFINE(SOAP, 149);
ELEMENT_DEFINE(NBHL, 150);
ELEMENT_DEFINE(NWHL, 151);
ELEMENT_DEFINE(MERC, 152);
ELEMENT_DEFINE(PBCN, 153);
ELEMENT_DEFINE(GPMP, 154);
ELEMENT_DEFINE(CLST, 155);
ELEMENT_DEFINE(WIRE, 156);
ELEMENT_DEFINE(GBMB, 157);
ELEMENT_DEFINE(FIGH, 158);
ELEMENT_DEFINE(FRAY, 159);
ELEMENT_DEFINE(RPEL, 160);
ELEMENT_DEFINE(PPIP, 161);
ELEMENT_DEFINE(DTEC, 162);
ELEMENT_DEFINE(DMG, 163);
ELEMENT_DEFINE(TSNS, 164);
ELEMENT_DEFINE(VIBR, 165);
ELEMENT_DEFINE(BVBR, 166);
ELEMENT_DEFINE(CRAY, 167);
ELEMENT_DEFINE(PSTN, 168);
ELEMENT_DEFINE(FRME, 169);
ELEMENT_DEFINE(GOLD, 170);
ELEMENT_DEFINE(TUNG, 171);
ELEMENT_DEFINE(PSNS, 172);
ELEMENT_DEFINE(PROT, 173);
ELEMENT_DEFINE(VIRS, 174);
ELEMENT_DEFINE(VRSS, 175);
ELEMENT_DEFINE(VRSG, 176);
ELEMENT_DEFINE(GRVT, 177);
ELEMENT_DEFINE(DRAY, 178);
ELEMENT_DEFINE(CRMC, 179);
ELEMENT_DEFINE(HEAC, 180);
ELEMENT_DEFINE(SAWD, 181);
ELEMENT_DEFINE(POLO, 182);
ELEMENT_DEFINE(RFRG, 183);
ELEMENT_DEFINE(RFGL, 184);
ELEMENT_DEFINE(LSNS, 185);
ELEMENT_DEFINE(LDTC, 186);
ELEMENT_DEFINE(VOC, 187);
ELEMENT_DEFINE(CO, 188);

#undef ELEMENT_DEFINE
