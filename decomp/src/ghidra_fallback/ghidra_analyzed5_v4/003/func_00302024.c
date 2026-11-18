#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00301B90(int param_1,int *param_2);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int *DAT_003020e8;
extern int DAT_003020ec;
extern undefined4 *DAT_003020f0;
extern undefined4 DAT_003020f4;

// USA 00302024 <- EU 00302000 (Ghidra, non-matching)
// GLOBAL DAT_003020e8 int *
// GLOBAL DAT_003020ec int
// GLOBAL DAT_003020f0 undefined4 *
// GLOBAL DAT_003020f4 undefined4

void func_00302024(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  iVar3 = DAT_003020ec;
  piVar2 = DAT_003020e8;
  iVar7 = param_1[0x187];
  iVar8 = param_1[0x188];
  iVar5 = 0;
  if (iVar7 != 0) {
    do {
      piVar6 = (int *)(iVar8 + iVar5 * 0x28);
      cVar1 = *(char *)((int)piVar6 + 0x22);
      if (cVar1 == '\0') {
        bVar4 = func_005822A0(*piVar2,(uint)*(ushort *)(piVar6 + 8),
                              (uint)*(byte *)((int)piVar6 + 0x23));
        if (bVar4) {
          *(undefined1 *)((int)piVar6 + 0x22) = 1;
        }
      }
      else if (cVar1 == '\x01') {
        if (piVar6[7] == 0) {
          *(undefined1 *)((int)piVar6 + 0x22) = 2;
          func_004A8304(*DAT_003020f0,piVar6[2]);
          local_2c = DAT_003020f4;
          local_30 = iVar3;
          func_0014DBF4(param_1,&local_30,piVar6 + 3,0);
        }
        else {
          piVar6[7] = piVar6[7] + -1;
        }
      }
      else if (cVar1 == '\x02') {
        func_00301B90(param_1,piVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar7);
  }
  return;
}

