#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_001DC928(int param_1,int param_2);
extern int func_002D3110(int param_1,int param_2);
extern int func_002D5D3C(void *param_1);
extern int func_002E1B70(int *param_1);
extern int func_002FD11C(int *param_1,int param_2);
extern undefined4 DAT_003a9e38;
extern int DAT_003a9e3c;

// USA 003A9CAC <- EU 003A9C88 (Ghidra, non-matching)
// GLOBAL DAT_003a9e38 undefined4
// GLOBAL DAT_003a9e3c int

undefined4 func_003A9CAC(undefined4 *param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  *param_1 = DAT_003a9e38;
  piVar2 = *(int **)(param_1[0xb] + 0x70);
  if (piVar2 != (int *)0x0) {
    param_2 = (uint)*(byte *)(piVar2 + 0x1f);
  }
  if (piVar2 != (int *)0x0 && param_2 != 2) {
    func_002FD11C(piVar2,1);
  }
  if (*(char *)(param_1[0xb] + 200) == '\0') {
    if (*(short *)(param_1[0xb] + 0x42) == 0x61) {
      puVar6 = (undefined4 *)param_1[0x24];
      iVar3 = (int)*(char *)(puVar6 + 1);
      if (iVar3 != 0) {
        if (iVar3 != -1) {
          iVar5 = puVar6[8];
          pcVar4 = *(code **)(iVar5 + iVar3 * 8);
          if ((pcVar4 != (code *)0x0) ||
             ((uVar7 = *(uint *)(iVar5 + iVar3 * 8 + 4), (uVar7 & 1) != 0 && (uVar7 != 0)))) {
            uVar7 = *(uint *)(iVar5 + iVar3 * 8 + 4);
            piVar2 = (int *)(puVar6[5] + ((int)uVar7 >> 1));
            if ((uVar7 & 1) != 0) {
              pcVar4 = *(code **)(pcVar4 + *piVar2);
            }
            (*pcVar4)(piVar2,0);
          }
        }
        uVar1 = *(undefined1 *)(puVar6 + 1);
        *(undefined1 *)(puVar6 + 1) = 0;
        *puVar6 = 0;
        *(undefined1 *)((int)puVar6 + 5) = uVar1;
        if (puVar6[4] != 0) {
          piVar2 = (int *)puVar6[3];
          (**(code **)(*piVar2 + 8))(piVar2);
          local_1c = piVar2[1];
          local_20 = DAT_003a9e3c;
          func_0010BEB4(puVar6[4],&local_20);
        }
        iVar5 = (int)*(char *)(puVar6 + 1);
        iVar3 = puVar6[6];
        pcVar4 = *(code **)(iVar3 + iVar5 * 8);
        if ((pcVar4 != (code *)0x0) ||
           ((uVar7 = *(uint *)(iVar3 + iVar5 * 8 + 4), (uVar7 & 1) != 0 && (uVar7 != 0)))) {
          uVar7 = *(uint *)(iVar3 + iVar5 * 8 + 4);
          if ((uVar7 & 1) != 0) {
            pcVar4 = *(code **)(pcVar4 + *(int *)(puVar6[5] + ((int)uVar7 >> 1)));
          }
          (*pcVar4)((int)(puVar6[5]) + ((int)uVar7 >> 1));
        }
      }
      func_002D3110(*(int *)(*(int *)(param_1[10] + 0x604) + 0x28),0);
    }
    func_001DC928(param_1[10],1);
    *(undefined1 *)(param_1[0x14] + 0x166) = 1;
  }
  func_002E1B70(param_1 + 0x3c);
  func_002D5D3C(param_1);
  return (undefined4)param_1;
}

