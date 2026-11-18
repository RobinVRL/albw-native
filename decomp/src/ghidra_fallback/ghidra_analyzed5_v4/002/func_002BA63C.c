#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern int func_00385458(int param_1);
extern int func_003859E8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002ba7a8;
extern int *DAT_002ba7ac;
extern int *DAT_002ba7b0;
extern undefined4 DAT_002ba7b4;
extern undefined4 DAT_002ba7b8;
extern undefined4 DAT_002ba7bc;

// USA 002BA63C <- EU 002BA618 (Ghidra, non-matching)
// GLOBAL DAT_002ba7a8 int *
// GLOBAL DAT_002ba7ac int *
// GLOBAL DAT_002ba7b0 int *
// GLOBAL DAT_002ba7b4 undefined4
// GLOBAL DAT_002ba7b8 undefined4
// GLOBAL DAT_002ba7bc undefined4

undefined4 func_002BA63C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(int * *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  if (*(short *)(param_1 + 0x90c) != 0) {
    return 0;
  }
  iVar2 = func_0052FBA0(*DAT_002ba7a8 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((iVar2 != 0) && (*(char *)(param_1 + 0xbc8) == '\x01')) {
    iVar3 = func_00588BE4(iVar2);
    if (iVar3 == *DAT_002ba7ac) {
      iVar2 = func_00385458(param_1 + 0xbd4);
    }
    else {
      iVar2 = func_00588BE4(iVar2);
      if (iVar2 != *DAT_002ba7b0) {
        return 1;
      }
      iVar2 = func_003859E8(param_1 + 0xbd4);
    }
    if ((iVar2 != 0) &&
       (((bVar1 = func_003840A0(param_1 + 0x8c0,10), bVar1 ||
         (bVar1 = func_003840A0(param_1 + 0x8c0,0xb), bVar1)) ||
        (bVar1 = func_003840A0(param_1 + 0x8c0,0xc), bVar1)))) {
      iVar2 = func_003838A8(param_1 + 0x8c0,0x87);
      bVar1 = func_003840A0(param_1 + 0x8c0,iVar2);
      if (!bVar1) {
        local_70[1] = 3;
        local_68 = &local_64;
        local_1c = 10;
        local_18 = 0;
        local_70[0] = 1;
        local_60 = DAT_002ba7b8;
        local_5c = DAT_002ba7b4;
        local_58 = DAT_002ba7bc;
        local_50 = in_r3 | 0xff;
        local_54 = DAT_002ba7b4;
        local_64 = iVar2;
        func_0016898C(*(int *)(param_1 + 0x8dc),local_70);
      }
    }
  }
  return 1;
}

