# Create Development Visualization with Gource:

* Captions with UNIX timestamps are located in `captions.txt`
* To add new captions, check the git log using `git log --date=raw` for their UNIX epoch timestamps
* Gource configuration is stored in `gource.conf`
* To generate the `.ppm` output file, run:

    ```shell
    gource --load-config etc/gource/gource.conf
    ```

* To convert to the WebM format, use `ffmpeg`:

    ```shell
    ffmpeg -y -r 60 -f image2pipe -vcodec ppm -i gource_visualization.ppm -vcodec libvpx -b 10000K gource.webm
    ```

