#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF2BC(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066E65C(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_0046759c;
extern int DAT_004675b4;
extern char s__SE_S_MAP_FLOOR_UP_0046759f[];
extern undefined4 _DAT_0046759c;

// USA 00467448 <- EU 00467420 (Ghidra, non-matching)
// GLOBAL DAT_0046759c undefined
// GLOBAL DAT_004675b4 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00467448(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  func_00231448(param_1 + 0xd4);
  fparam_0 = ALBW_AS_F32(_DAT_0046759c);
  func_002317C0((undefined2 *)(param_1 + 200),ALBW_AS_F32(_DAT_0046759c));
  if ((*(uint *)(*(int *)(param_1 + 0x120) + 0x18) & 4) == 0) {
    func_002317C0((undefined2 *)(*(int *)(param_1 + 0x120) + 0x84),fparam_0);
  }
  if ((*(uint *)(*(int *)(param_1 + 0x11c) + 0x18) & 4) == 0) {
    func_002317C0((undefined2 *)(*(int *)(param_1 + 0x11c) + 0x84),fparam_0);
  }
  uVar3 = 0;
  iVar4 = (int)(char)(*(char *)(param_1 + 299) + '\x01');
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar3 < 4) {
      piVar2 = piVar2 + uVar3;
    }
    if (*piVar2 != 0) {
      piVar2 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar2 = piVar2 + uVar3;
      }
      if (*(int *)(*piVar2 + 0xb0) == (int)*(char *)(param_1 + 299)) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar3 < 4) {
          piVar2 = piVar2 + uVar3;
        }
        cVar1 = *(char *)(*piVar2 + 0x84);
        if (cVar1 == '\x02' || cVar1 == '\x01') {
          func_0066E65C((undefined4 *)(*piVar2 + 0x80),3);
        }
      }
      else {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar3 < 4) {
          piVar2 = piVar2 + uVar3;
        }
        if (*(int *)(*piVar2 + 0xb0) == iVar4) {
          piVar2 = (int *)(param_1 + 0x108);
          if (uVar3 < 4) {
            piVar2 = piVar2 + uVar3;
          }
          if (*(byte *)(*piVar2 + 0x84) < 2) {
            func_0066E65C((undefined4 *)(*piVar2 + 0x80),1);
          }
        }
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  if (*(char *)(param_1 + 0x124) <= iVar4) {
    func_002BF2BC(*(int *)(param_1 + 0x11c));
  }
  local_24 = s__SE_S_MAP_FLOOR_UP_0046759f + 1;
  local_28 = DAT_004675b4;
  return func_00533078(*(undefined4 *)(param_1 + 0x11c),&local_28,0);
}

