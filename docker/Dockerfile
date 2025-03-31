# Use the official Ubuntu base image
FROM ubuntu:latest

# Update the package list and install SSH and net-tools (which includes ifconfig)
RUN apt-get update && apt-get install -y \
    openssh-server \
    net-tools \
    vim

# Clean up APT when done
RUN apt-get clean

# Configure SSH
RUN mkdir /var/run/sshd && \
    echo 'root:password' | chpasswd && \
    sed -i 's/#PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config && \
    sed -i 's/UsePAM yes/UsePAM no/' /etc/ssh/sshd_config

# Expose SSH port
EXPOSE 22

# Start the SSH service
CMD ["/usr/sbin/sshd", "-D"]