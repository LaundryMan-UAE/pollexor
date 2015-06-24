package com.squareup.pollexor;

/**  /** Image formats supported by Thumbor. */
public enum ImageFormat {
    GIF("gif"), JPEG("jpeg"), PNG("png"), WEBP("webp");

    final String value;

    private ImageFormat(String value) {
        this.value = value;
    }
}
