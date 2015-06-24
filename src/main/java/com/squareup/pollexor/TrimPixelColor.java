package com.squareup.pollexor;

/** Orientation from where to get the pixel color for trim. */
public enum TrimPixelColor {
    TOP_LEFT("top-left"), BOTTOM_RIGHT("bottom-right");

    final String value;

    private TrimPixelColor(String value) {
        this.value = value;
    }
}
