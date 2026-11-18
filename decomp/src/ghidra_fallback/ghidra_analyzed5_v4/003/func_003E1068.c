#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003E1068 <- EU 003E1048 (Ghidra, non-matching)

void func_003E1068(int param_1,int param_2,ushort *param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define aiStack_30 ((int *)(albw_frame + 0x0))
  iVar6 = *(int *)(*(int *)(param_1 + param_2 * 4 + 0x15dc) + 0x68);
  if ((param_3[1] == *(ushort *)(iVar6 + 4)) &&
     (*(uint *)(iVar6 + 8) = *(uint *)(param_3 + 2) >> 0x10 | *(uint *)(param_3 + 2) << 0x10,
     (*param_3 & 0xff00) != 0)) {
    piVar11 = (int *)(iVar6 + 0x70);
    uVar2 = param_3[4];
    uVar3 = param_3[5];
    func_0010C0C0(piVar11);
    iVar10 = *(int *)(iVar6 + 0x30);
    if (iVar10 == 0) {
      func_0010C160(piVar11);
    }
    else {
      psVar7 = (short *)(iVar6 + 0x34);
      iVar9 = 0;
      if (*(short *)(iVar6 + 0x34) != 0) {
        while (*(ushort *)(iVar10 + 0x12) != uVar2) {
          sVar4 = *psVar7;
          *psVar7 = sVar4 + -1;
          aiStack_30[iVar9] = iVar10;
          iVar9 = iVar9 + 1;
          if ((uVar2 == 0) && (*(ushort *)(iVar10 + 0x12) == uVar3 || uVar3 == 0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if ((bVar5) || ((short)(sVar4 + -1) == 0)) goto LAB_003e1154;
        }
        *(undefined1 *)(iVar10 + 0x11) = 2;
      }
LAB_003e1154:
      if (uVar2 == 0) {
        *psVar7 = 0;
      }
      coproc_moveto_Data_Memory_Barrier(0);
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          piVar1 = aiStack_30 + iVar8;
          iVar8 = iVar8 + 1;
          *(undefined1 *)(*piVar1 + 0x11) = 3;
        } while (iVar8 < iVar9);
      }
      *(int *)(iVar6 + 0x30) = iVar10;
      func_0010C160(piVar11);
    }
  }
  *(bool *)(iVar6 + 0xc) = (*param_3 & 0xff) == 1;
  return;
}

