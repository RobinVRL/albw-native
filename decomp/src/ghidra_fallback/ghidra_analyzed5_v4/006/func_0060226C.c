#include "ghidra_types.h"

extern int func_003E3610(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_00601920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00601954(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,uint param_5, int param_6,undefined4 param_7);
extern int func_00601974(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8);
extern int func_00601994(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5 ,uint param_6,int param_7,undefined4 param_8);
extern int DAT_006024a4;

// USA 0060226C <- EU 00602244 (Ghidra, non-matching)
// GLOBAL DAT_006024a4 int

int func_0060226C(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  iVar1 = DAT_006024a4;
  iVar2 = 1;
  if (*(char *)(DAT_006024a4 + 0x18) != '\x01') {
    iVar9 = *(int *)(DAT_006024a4 + 0xa0);
    iVar2 = *(int *)(iVar9 + 0x24);
    if (iVar2 < *(int *)(iVar9 + 0x20)) {
      do {
        if (*(int *)(iVar1 + 0x14) + *(int *)(iVar9 + 0x28) <= iVar2) {
          return iVar2;
        }
        puVar8 = (undefined1 *)(*(int *)(iVar9 + 0x18) + iVar2 * 0x1c);
        switch(*puVar8) {
        case 0:
          func_00601920(*(int *)(puVar8 + 8),*(undefined4 *)(puVar8 + 4),
                        *(undefined4 *)(puVar8 + 0xc),~*(uint *)(puVar8 + 0x10) & 1);
          break;
        case 1:
          func_003E3610(*(undefined4 *)(puVar8 + 4),*(undefined4 *)(puVar8 + 8),
                        ~(*(uint *)(puVar8 + 0xc) >> 2) & 1,*(uint *)(puVar8 + 0xc) & 1);
          break;
        case 2:
          func_00601974(*(int *)(puVar8 + 4),
                        *(int *)(puVar8 + 4) + (*(uint *)(puVar8 + 0xc) & 0x7fffff),
                        *(undefined4 *)(puVar8 + 8),
                        (ushort)(*(uint *)(puVar8 + 0xc) >> 0xf) & 0x300 | 1,*(int *)(puVar8 + 0x10)
                        ,(*(uint *)(puVar8 + 0x18) & 0x7fffff) + *(int *)(puVar8 + 0x10),
                        *(undefined4 *)(puVar8 + 0x14),
                        (ushort)(*(uint *)(puVar8 + 0x18) >> 0xf) & 0x300 | 1);
          break;
        case 3:
          uVar3 = *(uint *)(puVar8 + 0x14);
          uVar5 = *(uint *)(puVar8 + 0xc);
          uVar6 = *(uint *)(puVar8 + 0x10);
          uVar7 = uVar3 << 0x19;
          uVar10 = uVar6 & 0xffff;
          bVar11 = (uVar5 & 0xffff) <= uVar10;
          uVar4 = uVar7 >> 0x1f;
          if (bVar11) {
            uVar7 = uVar6 >> 0x10;
          }
          if (!bVar11 || uVar7 < uVar5 >> 0x10) {
            uVar4 = uVar4 | 4;
          }
          func_00601954(*(undefined4 *)(puVar8 + 4),uVar5 & 0xffff,uVar5 >> 0x10,
                        *(undefined4 *)(puVar8 + 8),uVar10,uVar6 >> 0x10,
                        uVar3 >> 6 & 0x20 |
                        (uVar3 & 0x200) << 7 |
                        (uVar3 & 0x180) << 0x11 | uVar4 | (uVar3 & 7) << 8 | (uVar3 & 0x38) << 9 |
                        uVar3 >> 9 & 2);
          break;
        case 4:
          uVar7 = *(uint *)(puVar8 + 0x10);
          if (((uVar7 & 0xffff) != 0) || (uVar4 = 0, (*(uint *)(puVar8 + 0x14) & 0xffff) != 0)) {
            uVar4 = 4;
          }
          func_00601994(*(undefined4 *)(puVar8 + 4),*(undefined4 *)(puVar8 + 8),
                        *(undefined4 *)(puVar8 + 0xc),uVar7 >> 0x10,uVar7 & 0xffff,
                        *(uint *)(puVar8 + 0x14) >> 0x10,*(uint *)(puVar8 + 0x14) & 0xffff,uVar4 | 8
                       );
        }
        iVar2 = *(int *)(iVar9 + 0x24) + 1;
        *(int *)(iVar9 + 0x24) = iVar2;
        if (puVar8[2] == '\x01') {
          *(undefined1 *)(iVar1 + 0x18) = 1;
          return iVar2;
        }
      } while (iVar2 < *(int *)(iVar9 + 0x20));
    }
  }
  return iVar2;
}

