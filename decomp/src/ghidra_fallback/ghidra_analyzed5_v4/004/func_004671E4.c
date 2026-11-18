#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00466B38(int param_1);
extern int func_00467F44(int param_1);
extern int func_00532C78(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066E65C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00467370;
extern float DAT_0046739c;
extern char s_SE_S_MAP_FLOOR_DOWN_00467388[];
extern char s_SE_S_MAP_FLOOR_UP_00467374[];

// USA 004671E4 <- EU 004671BC (Ghidra, non-matching)
// GLOBAL DAT_00467370 int
// GLOBAL DAT_0046739c float
// GLOBAL s_SE_S_MAP_FLOOR_DOWN_00467388 string
// GLOBAL s_SE_S_MAP_FLOOR_UP_00467374 string

void func_004671E4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint in_fpscr;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  dVar6 = (double)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  dVar7 = (double)VectorSignedToFloat((int)*(char *)(param_1 + 0x125),(byte)(in_fpscr >> 0x15) & 3);
  dVar8 = (double)VectorSignedToFloat((int)*(char *)(param_1 + 0x124),(byte)(in_fpscr >> 0x15) & 3);
  if ((dVar7 <= dVar6) && (dVar7 = dVar6, dVar8 < dVar6)) {
    dVar7 = dVar8;
  }
  iVar5 = VectorFloatToSigned(dVar7,3);
  if (iVar5 == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x124);
  }
  if (*(char *)(param_1 + 299) < iVar5) {
    local_14 = s_SE_S_MAP_FLOOR_UP_00467374;
  }
  else {
    if (*(char *)(param_1 + 299) <= iVar5) goto LAB_00467268;
    local_14 = s_SE_S_MAP_FLOOR_DOWN_00467388;
  }
  local_18 = DAT_00467370;
  func_00533078(*(undefined4 *)(param_1 + 0x108),&local_18,0);
LAB_00467268:
  *(char *)(param_1 + 299) = (char)iVar5;
  func_00466B38(param_1);
  uVar4 = 0;
  do {
    piVar3 = (int *)(param_1 + 0x108);
    if (uVar4 < 4) {
      piVar3 = piVar3 + uVar4;
    }
    if (*(int *)(*piVar3 + 0xb0) == (int)*(char *)(param_1 + 299)) {
      piVar3 = (int *)(param_1 + 0x108);
      if (uVar4 < 4) {
        piVar3 = piVar3 + uVar4;
      }
      if (*(byte *)(*piVar3 + 0x84) < 2) {
        func_0066E65C((undefined4 *)(*piVar3 + 0x80),1);
      }
    }
    else {
      piVar3 = (int *)(param_1 + 0x108);
      if (uVar4 < 4) {
        piVar3 = piVar3 + uVar4;
      }
      cVar1 = *(char *)(*piVar3 + 0x84);
      if (cVar1 == '\x02' || cVar1 == '\x01') {
        func_0066E65C((undefined4 *)(*piVar3 + 0x80),3);
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  func_00467F44(param_1);
  iVar5 = *(int *)(param_1 + 0x118);
  bVar2 = func_00532C78(iVar5 + 0x2c);
  if (!bVar2) {
    return;
  }
  func_00231340((short *)(iVar5 + 0x2c));
  func_00231448(iVar5 + 0x2c);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined2 *)(iVar5 + 0x22) = 2;
  *(undefined2 *)(iVar5 + 0x20) = 0;
  func_002317C0((undefined2 *)(iVar5 + 0x20),DAT_0046739c);
  return;
}

