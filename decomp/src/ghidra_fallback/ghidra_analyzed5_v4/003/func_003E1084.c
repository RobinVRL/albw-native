#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003E1084 <- EU 003E1064 (Ghidra, non-matching)

void func_003E1084(int param_1,ushort *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  if ((param_2[1] == *(ushort *)(param_1 + 4)) &&
     (*(uint *)(param_1 + 8) = *(uint *)(param_2 + 2) >> 0x10 | *(uint *)(param_2 + 2) << 0x10,
     (*param_2 & 0xff00) != 0)) {
    piVar10 = (int *)(param_1 + 0x70);
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    func_0010C0C0(piVar10);
    iVar9 = *(int *)(param_1 + 0x30);
    if (iVar9 == 0) {
      func_0010C160(piVar10);
    }
    else {
      psVar6 = (short *)(param_1 + 0x34);
      iVar8 = 0;
      if (*(short *)(param_1 + 0x34) != 0) {
        while (*(ushort *)(iVar9 + 0x12) != uVar2) {
          sVar4 = *psVar6;
          *psVar6 = sVar4 + -1;
          local_30[iVar8] = iVar9;
          iVar8 = iVar8 + 1;
          if ((uVar2 == 0) && (*(ushort *)(iVar9 + 0x12) == uVar3 || uVar3 == 0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          iVar9 = *(int *)(iVar9 + 0x14);
          if ((bVar5) || ((short)(sVar4 + -1) == 0)) goto LAB_003e1154;
        }
        *(undefined1 *)(iVar9 + 0x11) = 2;
      }
LAB_003e1154:
      if (uVar2 == 0) {
        *psVar6 = 0;
      }
      coproc_moveto_Data_Memory_Barrier(0);
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          piVar1 = local_30 + iVar7;
          iVar7 = iVar7 + 1;
          *(undefined1 *)(*piVar1 + 0x11) = 3;
        } while (iVar7 < iVar8);
      }
      *(int *)(param_1 + 0x30) = iVar9;
      func_0010C160(piVar10);
    }
  }
  *(bool *)(param_1 + 0xc) = (*param_2 & 0xff) == 1;
  return;
}

