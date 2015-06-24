package com.squareup.pollexor;

/**
 * Created by marcussmith on 24/06/15.
 */
public class ThumborEnums {
    /** Horizontal alignment for crop positioning. */
    public enum HorizontalAlign {
        LEFT("left"), CENTER("center"), RIGHT("right");

        final String value;

        private HorizontalAlign(String value) {
            this.value = value;
        }
    }

    /** Vertical alignment for crop positioning. */
    public enum VerticalAlign {
        TOP("top"), MIDDLE("middle"), BOTTOM("bottom");

        final String value;

        private VerticalAlign(String value) {
            this.value = value;
        }
    }

    /** Orientation from where to get the pixel color for trim. */
    public enum TrimPixelColor {
        TOP_LEFT("top-left"), BOTTOM_RIGHT("bottom-right");

        final String value;

        private TrimPixelColor(String value) {
            this.value = value;
        }
    }

    /** Image formats supported by Thumbor. */
    public enum ImageFormat {
        GIF("gif"), JPEG("jpeg"), PNG("png"), WEBP("webp");

        final String value;

        private ImageFormat(String value) {
            this.value = value;
        }
    }
}
