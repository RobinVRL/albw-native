#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);
extern int func_0011130C(int param_1,uint param_2,int param_3,undefined4 param_4,...);
extern char s_cf_00581190[];
extern char s_cf_005811ac[];
extern char s_current__d_data__d_005811ac[];
extern char s_magic_code_must_be__eflk__00581190[];

// USA 005810A4 <- EU 0058107C (Ghidra, non-matching)
// GLOBAL s_cf_005811ac string
// GLOBAL s_cf_00581190 string

char * func_005810A4(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pcVar5 = *(char **)(*(int *)(param_1 + 8) + iVar6 * 4);
      if (pcVar5 != (char *)0x0) {
        if (*pcVar5 == 'e') {
          cVar1 = pcVar5[1];
          bVar7 = cVar1 == 'f';
          if (bVar7) {
            cVar1 = pcVar5[2];
          }
          bVar8 = bVar7 && cVar1 == 'l';
          if (bVar7 && cVar1 == 'l') {
            bVar8 = pcVar5[3] == 'k';
          }
          if (!bVar8) goto LAB_005810d8;
          if (*(int *)(pcVar5 + 4) == 9) {
            iVar2 = *(int *)(pcVar5 + 0xc);
            iVar4 = 0;
            if (0 < *(int *)(pcVar5 + 8)) {
              do {
                uVar3 = func_0010FBAC((uint *)(pcVar5 + *(int *)(pcVar5 + iVar4 * 8 + 0x14) + iVar2)
                                      ,param_2);
                if (uVar3 == 0) {
                  return pcVar5 + *(int *)(pcVar5 + iVar4 * 8 + 0x10);
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(pcVar5 + 8));
            }
            goto LAB_00581164;
          }
          iVar2 = *(int *)(param_1 + 0xc);
          pcVar5 = s_current__d_data__d_005811ac;
          uVar3 = 7;
        }
        else {
LAB_005810d8:
          iVar2 = *(int *)(param_1 + 0xc);
          pcVar5 = s_magic_code_must_be__eflk__00581190;
          uVar3 = 6;
        }
        func_0011130C(iVar2,uVar3,0,pcVar5);
      }
LAB_00581164:
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 4));
  }
  return (char *)0x0;
}

