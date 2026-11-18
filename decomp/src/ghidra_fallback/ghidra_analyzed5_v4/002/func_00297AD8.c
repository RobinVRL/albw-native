#include "ghidra_types.h"

extern int func_003D2360(void);
extern int func_003D239C(void);
extern int func_003D23D8(undefined4 *param_1);
extern int func_003D2410(void);
extern int func_003D2490(int param_1);
extern int func_003D252C(void);
extern int func_003D25A0(undefined4 param_1);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined4 DAT_00297ca4;
extern int DAT_00297ca8;
extern char *DAT_00297cac;
extern char s_EU_English_00297cb0[];
extern char s_EU_French_00297cbc[];
extern char s_EU_German_00297cd4[];
extern char s_EU_Italian_00297ce0[];
extern char s_EU_Spanish_00297cc8[];

// USA 00297AD8 <- EU 00297B00 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00297ca4 undefined4
// GLOBAL DAT_00297ca8 int
// GLOBAL DAT_00297cac char *
// GLOBAL s_EU_English_00297cb0 string
// GLOBAL s_EU_French_00297cbc string
// GLOBAL s_EU_German_00297cd4 string
// GLOBAL s_EU_Italian_00297ce0 string
// GLOBAL s_EU_Spanish_00297cc8 string

undefined4 func_00297AD8(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar3 = func_003D25A0(param_1);
  *(char *)(param_1 + 0x60) = (char)uVar3;
  iVar1 = DAT_00297ca8;
  local_14 = (char *)DAT_00297ca4;
  local_18 = DAT_00297ca8;
  func_00689894(param_1 + 8,&local_18,2);
  local_14 = DAT_00297cac;
  local_18 = iVar1;
  func_00689894(param_1 + 0x34,&local_18,0xffffffff);
  *(undefined1 *)(param_1 + 1) = 1;
  uVar3 = func_003D239C();
  switch(uVar3) {
  case 1:
    *(undefined1 *)(param_1 + 1) = 1;
    local_14 = s_EU_English_00297cb0;
    local_18 = iVar1;
    func_00689894(param_1 + 0x34,&local_18,0xffffffff);
    break;
  case 2:
    *(undefined1 *)(param_1 + 1) = 3;
    local_14 = s_EU_French_00297cbc;
    local_18 = iVar1;
    func_00689894(param_1 + 0x34,&local_18,0xffffffff);
    break;
  case 3:
    *(undefined1 *)(param_1 + 1) = 2;
    local_14 = s_EU_German_00297cd4;
    local_18 = iVar1;
    func_00689894(param_1 + 0x34,&local_18,0xffffffff);
    break;
  case 4:
    *(undefined1 *)(param_1 + 1) = 5;
    local_14 = s_EU_Italian_00297ce0;
    local_18 = iVar1;
    func_00689894(param_1 + 0x34,&local_18,0xffffffff);
    break;
  case 5:
    *(undefined1 *)(param_1 + 1) = 4;
    local_14 = s_EU_Spanish_00297cc8;
    local_18 = iVar1;
    func_00689894(param_1 + 0x34,&local_18,0xffffffff);
  }
  uVar3 = func_003D2360();
  *(short *)(param_1 + 0x62) = (short)uVar3;
  func_003D2490(param_1 + 100);
  bVar2 = func_003D2410();
  *(bool *)(param_1 + 2) = bVar2;
  uVar3 = func_003D252C();
  *(char *)(param_1 + 3) = (char)uVar3;
  return func_003D23D8((undefined4 *)(param_1 + 0x106c));
}

