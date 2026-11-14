/* compilefix: USA 00179BC4 (EU 00179BC4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [5]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00178AE8(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_00179104(int param_1,uint *param_2,uint *param_3);
extern int func_00179190(int param_1,uint *param_2,int param_3,int param_4);
extern int func_001794DC(int param_1,uint *param_2,int param_3,uint param_4,int param_5);
extern int func_00584084(int param_1,int param_2);
extern int func_00584438(int param_1);
extern int func_005844EC(int param_1);
extern int func_005847C0(int param_1);
extern int func_005847DC(int param_1);
extern int func_005847EC(int param_1);
extern uint *DAT_00179f28;
extern int DAT_00179f2c;
extern int *DAT_00179f30;
extern int *DAT_00179f34;
extern undefined4 DAT_00179f38;
extern undefined4 DAT_00179f3c;
extern undefined2 DAT_00179f40;
extern int DAT_00179f4c;
extern int *DAT_00179f50;
extern int *DAT_00179f54;
extern int *DAT_00179f58;
extern undefined2 DAT_00179f5c;
extern undefined2 DAT_0017a17c;

// USA 00179BC4 <- EU 00179BC4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00179f28 uint *
// GLOBAL DAT_00179f2c int
// GLOBAL DAT_00179f30 int *
// GLOBAL DAT_00179f34 int *
// GLOBAL DAT_00179f38 undefined4
// GLOBAL DAT_00179f3c undefined4
// GLOBAL DAT_00179f40 undefined2
// GLOBAL DAT_00179f4c int
// GLOBAL DAT_00179f50 int *
// GLOBAL DAT_00179f54 int *
// GLOBAL DAT_00179f58 int *
// GLOBAL DAT_00179f5c undefined2
// GLOBAL DAT_0017a17c undefined2

uint * func_00179BC4(int param_1,uint *param_2,uint *param_3,undefined4 param_4,int param_5)

{
  _Alignas(8) unsigned char albw_frame[0x60]; /* entry_sp - 0x50 .. entry_sp + 0x10 */
#define stack0xffffffb0 (*(undefined4 *)(albw_frame + 0x0))
  __builtin_memcpy(albw_frame + 0x50, &param_5, 4);
#define param_5 (*(int *)(albw_frame + 0x50))
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  #define local_4c (*(uint * *)(albw_frame + 0x4))
  #define local_44 ((uint *)(albw_frame + 0xc))
  #define local_30 (*(undefined2 *)(albw_frame + 0x20))
  #define local_28 (*(int *)(albw_frame + 0x28))
  #define local_24 (*(uint * *)(albw_frame + 0x2c))
  iVar7 = DAT_00179f2c;
  if (((*DAT_00179f28 & 1) == 0) &&
     (iVar5 = func_00100174((int *)DAT_00179f28), piVar4 = DAT_00179f30, iVar5 != 0)) {
    DAT_00179f30[1] = *DAT_00179f34;
    *piVar4 = iVar7;
  }
  piVar4 = DAT_00179f30;
  switch(param_4) {
  case 0:
    local_30 = 0;
    (*(undefined2 *)((char *)&local_44[0] + 0)) = 0;
    local_24 = (uint *)&DAT_00179f40;
    local_28 = iVar7;
    iVar5 = DAT_00179f4c;
    (**(code **)(iVar7 + 8))(&local_28);
    iVar7 = 0;
    do {
      if (*(short *)((int)local_24 + iVar7 * 2) == 0) {
        if (iVar7 < 0x40001) goto LAB_00179ce0;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_00179ce0:
    if (10 < iVar7) {
      iVar7 = 10;
    }
    (**(code **)(local_28 + 8))(&local_28);
    func_0010E3C4(local_44,local_24,iVar7 << 1);
    *(undefined2 *)((int)local_44 + iVar7 * 2) = 0;
    func_00584084(*DAT_00179f50,(int)&stack0xffffffb0);
    (**(code **)(iVar5 + 8))(&stack0xffffffb0);
    (**(code **)(iVar5 + 8))(&stack0xffffffb0);
    iVar7 = 0;
    do {
      if (*(short *)((int)local_44 + iVar7 * 2) == 0) {
        if (iVar7 < 0x40001) goto LAB_00179d80;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_00179d80:
    param_3 = (uint *)(uintptr_t)(func_00178AE8(param_1,param_3,local_44,iVar7 << 1));
    break;
  case 1:
    local_4c = (uint *)(*DAT_00179f54 + 0x1098);
    if (*(char *)(*DAT_00179f54 + 0x10ae) == '\0') {
      (**(code **)(iVar7 + 8))(&stack0xffffffb0);
      (**(code **)(iVar7 + 8))(&stack0xffffffb0);
      iVar7 = 0;
      do {
        if (*(short *)((int)local_4c + iVar7 * 2) == 0) goto joined_r0x0017a020;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x40001);
      goto LAB_0017a024;
    }
    (**(code **)(*DAT_00179f30 + 8))(DAT_00179f30);
    local_4c = (uint *)piVar4[1];
    (**(code **)(*piVar4 + 8))(piVar4);
    iVar7 = 0;
    do {
      if (*(short *)(piVar4[1] + iVar7 * 2) == 0) {
        if (iVar7 < 0x40001) goto LAB_00179e20;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_00179e20:
    uVar9 = iVar7 << 1;
    goto LAB_0017a02c;
  case 2:
    if (*DAT_00179f58 != 0) {
      local_4c = (uint *)func_005847EC(*DAT_00179f58);
      if ((short)*local_4c == 0) {
        local_4c = (uint *)&DAT_00179f5c;
      }
      (**(code **)(iVar7 + 8))(&stack0xffffffb0);
      (**(code **)(iVar7 + 8))(&stack0xffffffb0);
      iVar7 = 0;
      do {
        if (*(short *)((int)local_4c + iVar7 * 2) == 0) {
          if (iVar7 < 0x40001) goto LAB_00179f80;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x40001);
      iVar7 = 0;
LAB_00179f80:
      param_3 = (uint *)(uintptr_t)(func_00178AE8(param_1,param_3,local_4c,iVar7 << 1));
    }
    break;
  case 3:
    if (*DAT_00179f58 == 0) {
      return param_3;
    }
    local_4c = (uint *)func_005847C0(*DAT_00179f58);
    if ((short)*local_4c == 0) {
      local_4c = (uint *)&DAT_0017a17c;
    }
    (**(code **)(iVar7 + 8))(&stack0xffffffb0);
    (**(code **)(iVar7 + 8))(&stack0xffffffb0);
    iVar7 = 0;
    do {
      if (*(short *)((int)local_4c + iVar7 * 2) == 0) goto joined_r0x0017a020;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
LAB_0017a024:
    iVar7 = 0;
    goto LAB_00179e94;
  case 4:
    uVar9 = *(uint *)(param_1 + 0x70);
    if ((int)uVar9 < 1) {
      return param_3;
    }
    local_4c = *(uint **)(param_1 + 0x68);
LAB_0017a02c:
    param_3 = (uint *)(uintptr_t)(func_00178AE8(param_1,param_3,local_4c,uVar9));
    break;
  case 5:
    bVar1 = *(byte *)(param_5 + 8);
    bVar2 = *(byte *)(param_5 + 9);
    bVar3 = *(byte *)(param_5 + 0xc);
    uVar9 = (uint)(short)((ushort)*(byte *)(param_5 + 10) + (ushort)*(byte *)(param_5 + 0xb) * 0x100
                         );
    puVar6 = (uint *)(uintptr_t)(func_00179104(param_1,param_2,param_3));
    param_3 = (uint *)func_001794DC(param_1,puVar6,(uint)bVar1,uVar9,(uint)bVar2);
    if ((int)uVar9 < 0) {
      param_3 = (uint *)(uintptr_t)(func_00179190(param_1,param_3,(uint)bVar3,(uint)bVar2));
    }
    break;
  case 9:
    if (*DAT_00179f58 != 0) {
      iVar7 = func_00584438(*DAT_00179f58);
      param_3 = (uint *)func_001794DC(param_1,param_3,0,(int)(short)iVar7,0);
    }
    break;
  case 10:
    if (*DAT_00179f58 != 0) {
      iVar7 = func_005847DC(*DAT_00179f58);
      param_3 = (uint *)func_001794DC(param_1,param_3,0,(int)(short)iVar7,0);
    }
    break;
  case 0xb:
    if (*DAT_00179f58 != 0) {
      uVar8 = func_005844EC(*DAT_00179f58);
      param_3 = (uint *)func_001794DC(param_1,param_3,0,(int)(short)uVar8,0);
    }
  }
  return param_3;
joined_r0x0017a020:
  if (0x40000 < iVar7) goto LAB_0017a024;
LAB_00179e94:
  uVar9 = iVar7 << 1;
  goto LAB_0017a02c;
}

