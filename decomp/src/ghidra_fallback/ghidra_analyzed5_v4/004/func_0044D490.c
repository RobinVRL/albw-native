#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00448FD0(int param_1);
extern int func_0044E4F8(int param_1,float *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_0044d5d8;
extern float DAT_0044d5dc;
extern int *DAT_0044d5e0;
extern float DAT_0044d5e4;
extern int DAT_0044d5e8;
extern char s_SE_S_MAP_PIN_DRUG_0044d608[];
extern char s_SE_S_MAP_PIN_DRUG_IN_MAP_0044d5ec[];

// USA 0044D490 <- EU 0044D468 (Ghidra, non-matching)
// GLOBAL DAT_0044d5d8 undefined4
// GLOBAL DAT_0044d5dc float
// GLOBAL DAT_0044d5e0 int *
// GLOBAL DAT_0044d5e4 float
// GLOBAL DAT_0044d5e8 int
// GLOBAL s_SE_S_MAP_PIN_DRUG_0044d608 string
// GLOBAL s_SE_S_MAP_PIN_DRUG_IN_MAP_0044d5ec string

undefined4 func_0044D490(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  piVar1 = DAT_0044d5e0;
  fVar2 = DAT_0044d5dc;
  uVar3 = CONCAT44(DAT_0044d5dc,DAT_0044d5d8);
  if (*(char *)(param_1 + 0xb5) == '\x05' || *(char *)(param_1 + 0xb5) == '\a') {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x76) = 6;
    *(undefined2 *)(param_1 + 0x74) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x74),fVar2);
    func_002313DC(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xd4) = 1;
    *(undefined1 *)(param_1 + 0xd5) = 1;
    *(int *)(param_1 + 0xd8) = (int)uVar3;
    fVar2 = *(float *)(*(int *)(param_1 + 0x11c) + 0x20) - *(float *)(*piVar1 + 0x14);
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x76) = 0;
    *(undefined2 *)(param_1 + 0x74) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x74),fVar2);
    func_00231524(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xd5) = 0;
    *(int *)(param_1 + 0xd8) = (int)uVar3;
    fVar2 = DAT_0044d5e4 - *(float *)(*piVar1 + 0x14);
  }
  *(float *)(param_1 + 0xdc) = fVar2;
  func_002317C0((undefined2 *)(param_1 + 0x98),ALBW_AS_F32(((ulonglong)uVar3 >> 0x20)));
  if (*(int *)(param_1 + 300) != 0) {
    func_00448FD0(*(int *)(param_1 + 300));
  }
  local_20 = *(float *)(*piVar1 + 0x10) + *(float *)(param_1 + 0xd8);
  local_1c = *(float *)(*piVar1 + 0x14) + *(float *)(param_1 + 0xdc);
  func_0044E4F8(param_1,&local_20);
  local_28 = DAT_0044d5e8;
  if (*(char *)(param_1 + 0xb5) != '\0') {
    local_24 = s_SE_S_MAP_PIN_DRUG_IN_MAP_0044d5ec;
    return func_00533078(param_1,&local_28,0);
  }
  local_24 = s_SE_S_MAP_PIN_DRUG_0044d608;
  return func_00533078(param_1,&local_28,0);
}

