package org.libpag;

import org.extra.tools.LibraryLoadUtils;

public class PAGShapeLayer extends PAGLayer {
    public PAGShapeLayer(long nativeContext) {
        super(nativeContext);
    }

    private static native void nativeInit();

    public native void setTintColor(int shapeColor);

    public native int getTintColor();

    public native void clearTintColor();

    static {
        LibraryLoadUtils.loadLibrary("pag");
        nativeInit();
    }
}