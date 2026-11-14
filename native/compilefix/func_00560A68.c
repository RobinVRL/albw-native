/* compilefix: USA 00560A68 (EU 00560A40), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003E300C(byte *param_1,uint param_2,uint param_3);
extern int func_004F01F4(undefined4 param_1);
extern int func_00539210(int *param_1);
extern int DAT_00560c50;
extern int DAT_00560c54;

// USA 00560A68 <- EU 00560A40 (Ghidra, non-matching)
// GLOBAL DAT_00560c50 int
// GLOBAL DAT_00560c54 int

undefined4 func_00560A68(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_r3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_40 (*(int *)(albw_frame + 0x0))
  #define puStack_3c (*(uint * *)(albw_frame + 0x4))
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define puStack_34 (*(uint * *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define auStack_2c ((uint *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined2 *)(albw_frame + 0x28))
  if (((param_1[0xd] & 0xffff) != 3) ||
     (uVar2 = func_003E300C((byte *)param_1,0x38,0xffffffff), uVar2 != param_1[0xe])) {
    return 1;
  }
  uVar2 = *param_1;
  if (((uVar2 & 0x1f) - 3 < 0x12) && ((uVar2 << 0x17) >> 0x1e < 3)) {
    bVar4 = (uVar2 << 0x15) >> 0x1e < 3;
    if (bVar4) {
      in_r3 = uVar2 << 0x13;
    }
    bVar5 = in_r3 >> 0x1e < 3;
    bVar6 = bVar4 && bVar5;
    if (bVar4 && bVar5) {
      bVar6 = (uVar2 << 0x11) >> 0x1e < 3;
    }
    if (bVar6) {
      uVar1 = (uVar2 << 0xc) >> 0x1b;
      if (uVar1 < 0x1d) {
        uVar1 = (uVar2 << 7) >> 0x1b;
      }
      if ((((uVar1 < 0x1d) &&
           ((in_r3 >> 0x1e == 1 || (uVar2 & 0xf8000) == 0 ||
            (iVar3 = func_004F01F4((uVar2 << 0xc) >> 0x1b), iVar3 == 0)))) &&
          ((uVar2 = *param_1, (uVar2 << 0x11) >> 0x1e == 1 || (uVar2 & 0x1f00000) == 0 ||
           (iVar3 = func_004F01F4((uVar2 << 7) >> 0x1b), iVar3 == 0)))) && (*param_1 >> 0x1a < 0x33)
         ) {
        if (*(char *)((int)param_1 + 0x32) != '\0') {
          return 2;
        }
        if (param_2 != 0) {
          iStack_30 = 0xb;
          uStack_18 = 0;
          puStack_3c = param_1 + 1;
          (*(undefined2 *)((char *)&auStack_2c[0] + 0)) = 0;
          iStack_38 = DAT_00560c54;
          iStack_40 = DAT_00560c50;
          puStack_34 = auStack_2c;
          (**(code **)(DAT_00560c50 + 8))(&iStack_40);
          iVar3 = 0;
          do {
            if (*(short *)((int)puStack_3c + iVar3 * 2) == 0) {
              if (iVar3 < 0x40001) goto LAB_00560bf0;
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x40001);
          iVar3 = 0;
LAB_00560bf0:
          if (iStack_30 <= iVar3) {
            iVar3 = iStack_30 + -1;
          }
          (**(code **)(iStack_40 + 8))(&iStack_40);
          func_0010E3C4(auStack_2c,puStack_3c,iVar3 << 1);
          *(undefined2 *)((int)auStack_2c + iVar3 * 2) = 0;
          iVar3 = func_00539210(&iStack_38);
          if (iVar3 != 0) {
            return 2;
          }
        }
        return 0;
      }
    }
  }
  return 1;
}

