#include "ghidra_types.h"

extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern int func_001720C8(int param_1);
extern int func_004C4110(int param_1);
extern int func_0051E4EC(int param_1);
extern int *DAT_0014ad4c;
extern int *DAT_0014ad50;
extern int *DAT_0014ad54;
extern int *DAT_0014ad58;
extern int DAT_0014ad5c;
extern int *DAT_0014ad60;
extern int *DAT_0014ad64;
extern undefined4 DAT_0014ad68;

// USA 0014AC44 <- EU 0014AC44 (Ghidra, non-matching)
// GLOBAL DAT_0014ad4c int *
// GLOBAL DAT_0014ad50 int *
// GLOBAL DAT_0014ad54 int *
// GLOBAL DAT_0014ad58 int *
// GLOBAL DAT_0014ad5c int
// GLOBAL DAT_0014ad60 int *
// GLOBAL DAT_0014ad64 int *
// GLOBAL DAT_0014ad68 undefined4

void func_0014AC44(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((char *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  iVar2 = *DAT_0014ad4c;
  func_004C4110(*DAT_0014ad50);
  if (((*(int *)(*DAT_0014ad54 + 0x10) == 0) && ((~*(uint *)(iVar2 + 0x5dc) & 0x6800) == 0)) &&
     ((*(uint *)(iVar2 + 0x4d0) & 0x6800) != 0)) {
    if ((*DAT_0014ad58 == 0) || (bVar1 = func_0051E4EC(*DAT_0014ad58), !bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar4 = *(int *)(DAT_0014ad5c + param_1);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0xb0);
    }
    if (iVar4 != 0 && iVar2 != 0) {
      iVar2 = 1;
    }
    if ((!bVar1 && iVar2 == 0) && (*(char *)(param_1 + 0x25) != '\x01')) {
      cVar3 = '\x01';
      *(undefined1 *)(*DAT_0014ad60 + 0x81) = 1;
      iVar2 = *DAT_0014ad64;
      if (iVar2 != 0) {
        cVar3 = *(char *)(iVar2 + 0x70);
      }
      if (iVar2 != 0 && cVar3 != '\t') {
        func_001720C8(iVar2);
      }
      local_18[0] = '\x02';
      local_14 = DAT_0014ad68;
      func_0014AA1C(param_1,local_18,0);
    }
  }
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}

