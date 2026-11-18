#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002a0a18;
extern int DAT_002a0a1c;

// USA 002A0970 <- EU 002A094C (Ghidra, non-matching)
// GLOBAL DAT_002a0a18 undefined4
// GLOBAL DAT_002a0a1c int

void func_002A0970(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0x95c) != 0) {
    local_18 = *(float *)(param_1 + 0x960);
    uStack_14 = *(undefined4 *)(param_1 + 0x964);
    local_10 = *(undefined4 *)(param_1 + 0x968);
    func_001512B4(*(int *)(param_1 + 0x95c),&local_18);
  }
  uVar1 = DAT_002a0a18;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    *(undefined4 *)(param_1 + 0x4e4) = DAT_002a0a18;
    *(undefined4 *)(param_1 + 0x4e8) = uVar1;
    *(undefined4 *)(param_1 + 0x4ec) = uVar1;
    if (*(short *)(DAT_002a0a1c + param_1) < 1) {
      cVar2 = '\n';
    }
    else if (*(char *)(param_1 + 0x988) == '\0') {
      cVar2 = *(char *)(param_1 + 0x93d);
      if (cVar2 != '\x03') {
        cVar2 = '\x02';
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x988) = 0;
      cVar2 = '\a';
    }
    func_00661FE4((undefined4 *)(param_1 + 0x938),cVar2);
  }
  return;
}

