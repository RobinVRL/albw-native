/* USA 00518694 (EU 0051866C): converted Ghidra text (build/decomp, round-3 stage 2) with one fix.
 * Draw callback of a model whose elements share one normal matrix (render object +0x20): when
 * the light environment differs from the cache it CALLs the environment block, then writes the
 * shader uniforms NormMtx (3x4) and the hemisphere constants as RAW command words (uniform index
 * 0x2C0 | f32, data 0x2C1), fog / gas mode 0 (0x0E0), and draws the elements through the material
 * (00564C14 / 005655D0) and each element's vtable +0x10.
 * Bug fixed: the renderer only executes native markers, so the raw uniform words were dropped:
 * those elements were lit with whichever normal matrix the previous draw left (lighting changes
 * with draw order / camera position: the title flyover's tint jumps, BOOT_LOG 98). The uniform
 * block is now recorded as renderer ops (albw_h3d_norm_hemi, the same block as native 00170378).
 * The 0x0E0 word pair is kept (the renderer has no fog / gas yet, value 0 = off).
 * CLASS raw GPU words written by game code outside the replaced producers. From the EU machine
 * code (literal pool: 0x000F02C0 index, 0x00BF02C1 matrix burst, 0x804F02C0 vec4, 0x000100E0). */
#include "ghidra_types.h"
struct _IO_FILE; extern struct _IO_FILE *stderr;
int fprintf(struct _IO_FILE *, const char *, ...);
char *getenv(const char *);   /* debug trace only (no libc headers: ghidra_types.h clashes) */
#include "../include/ghidra_concat44.h"

void albw_h3d_norm_hemi(uint32_t *ctx, uint32_t loc, const float *mtx);

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_002C35A4(int param_1);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_00564C14(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern int func_005655D0(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern int *DAT_00518998;
extern uint DAT_0051899c;
extern undefined4 DAT_005189a0;
extern uint DAT_005189a4;
extern uint DAT_005189a8;
extern uint DAT_005189ac;
extern undefined4 DAT_005189b0;

// USA 00518694 <- EU 0051866C (Ghidra, non-matching)
// GLOBAL DAT_00518998 int *
// GLOBAL DAT_0051899c uint
// GLOBAL DAT_005189a0 undefined4
// GLOBAL DAT_005189a4 uint
// GLOBAL DAT_005189a8 uint
// GLOBAL DAT_005189ac uint
// GLOBAL DAT_005189b0 undefined4

undefined4 func_00518694(int *param_1,undefined4 param_2,int *param_3)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  ushort *puVar20;
  bool bVar21;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  /* lost argument (EU 0051867C-00518688: r1 = param_2 untouched into `blx` of vtable +0x10, e.g.
     0058D680(self, k): k < 6 and the pass enabled): Ghidra dropped it, so the visibility test read
     garbage and the stencil shadow volumes (cone / pyramid ...) were never drawn */
  iVar6 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  { static int tr0 = -1; static unsigned n0;
    if (tr0 < 0) tr0 = getenv("ALBW_518694_TRACE") != 0;
    if (tr0 && n0++ % 120 == 0) fprintf(stderr, "518694: entry #%u obj %#x visible %d fn %#x\n", n0, (unsigned)(uintptr_t)param_1, iVar6, (unsigned)*(int *)(*param_1 + 0x10));
  }
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = *DAT_00518998;
  piVar7 = *(int **)(iVar6 + 0x24);
  iVar8 = param_1[0x24];
  iVar14 = *(int *)(iVar6 + 0x14);
  piVar19 = *(int **)(*(int *)(iVar8 + 8) + 0x34);
  piVar16 = *(int **)(*piVar19 + 8);
  sVar2 = (short)piVar16[8];
  iVar18 = **(int **)(iVar8 + 0xb0);
  puVar20 = (ushort *)**(undefined4 **)(iVar8 + 0x24);
  if (iVar14 == *piVar16) {
    bVar21 = *(short *)(iVar6 + 0x18) == sVar2;
    if (bVar21) {
      sVar2 = *(short *)(iVar6 + 0x1a);
    }
    if (bVar21 && sVar2 == *(short *)((int)piVar16 + 0x22)) goto LAB_00518880;
  }
  if (iVar14 == *piVar16) {
    if ((*(short *)((int)piVar16 + 0x22) == -1) == (*(short *)(iVar6 + 0x1a) == -1)) {
      piVar9 = piVar16 + 4;
    }
    else {
      piVar9 = piVar16 + 6;
    }
  }
  else {
    piVar9 = piVar16 + 2;
  }
  iVar14 = *piVar9;
  iVar8 = piVar9[1];
  if (iVar14 != 0) {
    puVar10 = func_003CC1E4((undefined4 *)*param_3,(*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
    *param_3 = (int)puVar10;
    puVar10 = func_003CC230(puVar10,&local_28,iVar14,iVar8 << 2);
    *param_3 = (int)puVar10;
    if ((uint *)param_3[3] != (uint *)0x0) {
      *(uint *)param_3[3] = (uint)((int)puVar10 - param_3[2]) >> 3;
    }
    param_3[2] = *param_3;
    param_3[3] = local_28;
    if (param_3[4] == 0) {
      param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
    }
  }
  iVar8 = piVar16[8];
  uVar1 = *(undefined2 *)((int)piVar16 + 0x22);
  *(int *)(iVar6 + 0x14) = *piVar16;
  *(short *)(iVar6 + 0x18) = (short)iVar8;
  *(undefined2 *)(iVar6 + 0x1a) = uVar1;
  /* native: the raw uniform words (NormMtx = *(iVar6 + 0x20), hemisphere constants) as
     renderer ops; the original wrote 0x22 words here */
  albw_h3d_norm_hemi((uint32_t *)param_3,(uint32_t)iVar18,(const float *)*(undefined4 **)(iVar6 + 0x20));
LAB_00518880:
  uVar3 = DAT_005189b0;
  puVar12 = (undefined4 *)*param_3;
  *puVar12 = 0;
  puVar12[1] = uVar3;
  *param_3 = (int)(puVar12 + 2);
  if ((*puVar20 & 0x100) == 0) {
    func_00564C14(piVar19,param_3,puVar20,piVar7);
  }
  else {
    func_005655D0(piVar19,param_3,puVar20,piVar7);
  }
  iVar8 = param_1[0x23];
  uVar13 = (uint)*(char *)((int)param_1 + 0x96);
  { /* debug: ALBW_518694_TRACE=1 */
    static int tr = -1; static unsigned n;
    if (tr < 0) tr = getenv("ALBW_518694_TRACE") != 0;
    if (tr && n++ % 120 == 0) fprintf(stderr, "518694: #%u obj %#x flag150 %u sel %d\n", n, (unsigned)iVar8, *(unsigned char *)(iVar8 + 0x150), (int)uVar13);
  }
  if (*(char *)(iVar8 + 0x150) != '\0') {
    iVar14 = iVar8 + 0x118;
    if (uVar13 < 2) {
      iVar14 = iVar14 + uVar13 * 0x10;
    }
    iVar15 = *(int *)(iVar14 + 0xc);
    iVar11 = iVar8 + 0x118;
    if (uVar13 < 2) {
      iVar11 = iVar11 + uVar13 * 0x10;
    }
    iVar17 = *(int *)(iVar11 + 0xc);
    for (piVar7 = (int *)(*(int *)(iVar11 + 4) - iVar17); piVar7 != (int *)(iVar14 - iVar15);
        piVar7 = (int *)(*(int *)((int)piVar7 + iVar17 + 4) - iVar17)) {
      iVar11 = func_002C35A4((int)piVar7);
      { static int tr2 = -1; static unsigned n2;
        if (tr2 < 0) tr2 = getenv("ALBW_518694_TRACE") != 0;
        if (tr2 && n2++ % 120 == 0) fprintf(stderr, "518694:   elem %#x vis %d kind %u slot %#x\n", (unsigned)(uintptr_t)piVar7, iVar11,
                (unsigned)*(unsigned char *)(piVar7 + 6), (unsigned)*(int *)((iVar8 + 0x10) + 4 * (*(unsigned char *)(piVar7 + 6) < 8 ? *(unsigned char *)(piVar7 + 6) : 0)));
      }
      if (iVar11 != 0) {
        piVar16 = (int *)(iVar8 + 0x10);
        if (*(byte *)(piVar7 + 6) < 8) {
          piVar16 = piVar16 + *(byte *)(piVar7 + 6);
        }
        if (*piVar16 != 0) {
          /* lost 4th argument: r3 = *piVar16 (the slot just tested, EU 00518938), the model
             holder 002C3870 reads (+8 -> +0x40 first mesh) */
          (**(code **)(*piVar7 + 0x10))(piVar7,param_3,iVar18,*piVar16);
        }
      }
    }
  }
  *(undefined4 *)(iVar6 + 0x1c) = 0;
  *(undefined1 *)(iVar6 + 0x2c) = 0;
  *(undefined1 *)(iVar6 + 0x2d) = 0xff;
  *(undefined2 *)(iVar6 + 0x2e) = 0xffff;
  *(undefined4 *)(iVar6 + 0x28) = 0;
  return 1;
}

