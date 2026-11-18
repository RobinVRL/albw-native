#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern uint DAT_001a0808;
extern int DAT_001a080c;
extern char s_DeathBomb_001a0810[];
extern char s_SE_EN_BOSS_DIE_EXPLODE_001a081c[];

// USA 001A0564 <- EU 001A0564 (Ghidra, non-matching)
// GLOBAL DAT_001a0808 uint
// GLOBAL DAT_001a080c int
// GLOBAL s_DeathBomb_001a0810 string
// GLOBAL s_SE_EN_BOSS_DIE_EXPLODE_001a081c string

void func_001A0564(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define iStack_6c (*(int *)(albw_frame + 0x4))
  #define local_4c (*(int * *)(albw_frame + 0x24))
  #define local_44 (*(uint * *)(albw_frame + 0x2c))
  #define local_40 (*(int * *)(albw_frame + 0x30))
  #define local_3c (*(int *)(albw_frame + 0x34))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(char * *)(albw_frame + 0x3c))
  iVar5 = 0;
  local_4c = param_1 + 0x400;
  uVar10 = (ulonglong)DAT_001a0808;
  iVar6 = 0;
  piVar8 = param_1 + 0x48c;
  puVar7 = (uint *)(param_1 + 0x481);
  local_3c = DAT_001a080c;
  do {
    iVar3 = (int)*(char *)((int)param_1 + 0x121f);
    if ((-1 < iVar3) && (iVar3 == iVar6)) {
      if (*puVar7 < (uint)param_1[0x482]) {
        *puVar7 = *puVar7 + 1;
        iVar4 = *piVar8;
        if ((iVar4 == 0) || (*(int *)(iVar4 + 0x1c) != param_1[0x48d])) {
LAB_001a07b4:
          bVar2 = false;
LAB_001a07b8:
          if (!bVar2) goto LAB_001a07ec;
        }
        else {
          if ((*(uint *)(iVar4 + 0x3c) & 4) != 0 || (*(uint *)(iVar4 + 0x3c) & 0x40) != 0) {
            bVar2 = true;
            goto LAB_001a07b8;
          }
          iVar9 = *(int *)(iVar4 + 0x20);
          if ((iVar9 == 0) || (*(int *)(iVar4 + 0x24) != *(int *)(iVar9 + 0xc))) goto LAB_001a07b4;
          if (*(int *)(iVar9 + 4) < 1) goto LAB_001a07ec;
        }
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x48d])) {
          func_004A2F38(iVar4,param_1 + iVar3 * 3 + 0x45e);
        }
      }
      else {
        iVar3 = *piVar8;
        if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) != param_1[0x48d])) {
LAB_001a066c:
          bVar2 = false;
LAB_001a0670:
          if (bVar2) {
LAB_001a0678:
            *(undefined1 *)((int)param_1 + iVar5 * 0x48 + 0xa41) = 1;
            goto LAB_001a07ec;
          }
        }
        else {
          if ((*(uint *)(iVar3 + 0x3c) & 4) != 0 || (*(uint *)(iVar3 + 0x3c) & 0x40) != 0) {
            bVar2 = true;
            goto LAB_001a0670;
          }
          iVar4 = *(int *)(iVar3 + 0x20);
          if ((iVar4 == 0) || (*(int *)(iVar3 + 0x24) != *(int *)(iVar4 + 0xc))) goto LAB_001a066c;
          if (0 < *(int *)(iVar4 + 4)) goto LAB_001a0678;
        }
        cVar1 = *(char *)((int)param_1 + 0x121f) + -1;
        *(char *)((int)local_4c + 0x21f) = cVar1;
        if (-1 < cVar1) {
          local_40 = param_1 + 0xc9;
          local_44 = (uint *)s_DeathBomb_001a0810;
          if (param_1[0xd1] == 0) {
            *piVar8 = 0;
            param_1[0x48d] = 0;
          }
          else {
            iVar3 = *piVar8;
            if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x48d])) {
              func_00110848(iVar3);
            }
            func_004A1B9C(&local_70,local_40[8],local_44);
            *piVar8 = local_70;
            param_1[0x48d] = iStack_6c;
          }
          iVar3 = *piVar8;
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x48d])) {
            func_004A2F38(iVar3,param_1 + *(char *)((int)param_1 + 0x121f) * 3 + 0x45e);
          }
          param_1[0x482] = 0xbe;
          param_1[0x483] = (int)uVar10;
          *puVar7 = 0;
          local_38 = local_3c;
          local_34 = s_SE_EN_BOSS_DIE_EXPLODE_001a081c;
          func_0014DBF4(param_1,&local_38,param_1 + *(char *)((int)param_1 + 0x121f) * 3 + 0x45e,0);
        }
      }
    }
LAB_001a07ec:
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 1;
    if (iVar5 == 4) {
      return;
    }
  } while( true );
}

